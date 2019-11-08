/***************************************************************************
 *   Copyright (C) 2019 by santiago González                               *
 *   santigoro@gmail.com                                                   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, see <http://www.gnu.org/licenses/>.  *
 *                                                                         *
 ***************************************************************************/

#include "b16asmdebugger.h"
//#include "baseprocessor.h"
//#include "mainwindow.h"
#include "utils.h"
//#include "simuapi_apppath.h"


B16AsmDebugger::B16AsmDebugger( QObject* parent, OutPanelText* outPane, QString filePath )
              : BaseDebugger( parent,outPane, filePath )
{
    setObjectName( "B16 asm Compiler" );

    m_opcodes.insert( "INC", 0 );
    m_opcodes.insert( "RLA", 1 );
    m_opcodes.insert( "ADD", 2 );
    m_opcodes.insert( "SUB", 3 );
    m_opcodes.insert( "AND", 4 );
    m_opcodes.insert( "OR", 5 );
    m_opcodes.insert( "XOR", 6 );
    m_opcodes.insert( "NOT", 7 );

    m_opcodes.insert( "LDI", 8 );
    m_opcodes.insert( "LDM", 9 );
    m_opcodes.insert( "STM", 10 );
    m_opcodes.insert( "JPI", 11 );
    m_opcodes.insert( "JPZ", 12 );
    m_opcodes.insert( "JPC", 13 );
    m_opcodes.insert( "JPN", 14 );
    m_opcodes.insert( "NOP", 15 );
    
    readSettings();
}
B16AsmDebugger::~B16AsmDebugger() {}

int B16AsmDebugger::compile()
{
    QApplication::setOverrideCursor(Qt::WaitCursor);
    
    QString file = m_fileDir+m_fileName+m_fileExt;
    QStringList lines = fileToStringList( file, "B16AsmDebugger::compile" );

    QList<int> data;
    for( int i=0; i<256; i++ ) data << 15;
    
    foreach( QString line, lines )
    {
        if( line.isEmpty() ) continue;

        QStringList words = line.replace("\t", " ").split( " " );
        words.removeAll(QString(""));
        if( words.size() < 2 ) continue;

        QString addr = words.takeFirst();
        QString inst = words.takeFirst().toUpper();
        QString argu = "0";

        if( !words.isEmpty() ) argu = words.takeFirst();

        bool ok = false;
        int address = addr.toInt( &ok, 10 );
        if( !ok ) continue;
        if( address > 255 ) continue;

        ok = false;
        int arg = argu.toInt( &ok, 10 );
        if( !ok ) continue;
        if( arg > 255 ) continue;
        arg <<= 4;

        int opcode = m_opcodes.value( inst );

        int out = opcode + arg;

        data.replace( address, out );
    }
    int i = 0;
    QString output = "";
    foreach( int val, data )
    {
        QString sval = QString::number( val );
        while( sval.length() < 4) sval.prepend( " " );
        output += sval;
        if( i == 15 )
        {
            output += "\n";
            i = 0;
        }
        else
        {
            output += ",";
            i++;
        }
    }
    QString fileName = file;                    // Save Subcircuit

    fileName.replace( file.lastIndexOf( ".b16" ), 4, ".data" );
    QFile outFile( fileName );

    if( !outFile.open(QFile::WriteOnly | QFile::Text) )
    {
          QMessageBox::warning(0l, "B16AsmDebugger::compile",
          tr("Cannot write file %1:\n%2.").arg(fileName).arg(outFile.errorString()));
    }
    QTextStream toFile( &outFile );
    toFile << output;
    outFile.close();

    //qDebug() << data;
    
    QApplication::restoreOverrideCursor();
    return 0;
}

void B16AsmDebugger::mapFlashToSource()
{
}

#include "moc_b16asmdebugger.cpp"
