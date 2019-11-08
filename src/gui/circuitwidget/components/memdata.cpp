/***************************************************************************
 *   Copyright (C) 2018 by santiago González                               *
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

#include <sstream>
#include <QTranslator>

#include "memdata.h"
#include "circuit.h"
#include "utils.h"


MemData::MemData()
{
}
MemData::~MemData(){}

void MemData::loadData( QVector<int>* toData, bool resize )
{
    QString dir = Circuit::self()->getFileName();
    dir.replace( ".simu", ".data" );
    QString fileName = QFileDialog::getOpenFileName( 0l, QCoreApplication::translate("MemData", "Load Data"), dir,
                       QCoreApplication::translate( "MemData", "All files (*.*)"));

    if( fileName.isEmpty() ) return; // User cancels loading

    bool pauseSim = Simulator::self()->isRunning();
    if( pauseSim )  Simulator::self()->pauseSim();

    QStringList lines = fileToStringList( fileName, "MemData::loadData" );

    if( resize ) toData->resize( 1 );
    int addr = 0;
    int ramEnd = toData->size()-1;

    foreach( QString line, lines )
    {
        if( line.isEmpty() ) continue;

        line = line.replace("\t", "").replace(" ", "");

        QStringList words = line.split( "," );
        words.removeAll(QString(""));

        while( !words.isEmpty() )
        {
            QString sdata = words.takeFirst();
            bool ok = false;
            int data = sdata.toInt( &ok, 10 );
            if( !ok ) continue;

            if( resize )
            {
                ramEnd++;
                toData->resize( ramEnd+1 );
            }

            if( addr > ramEnd ) break;
            toData->replace( addr, data );
            addr++;
        }
        if( !words.isEmpty() && ( addr > ramEnd ) )
        {
            qDebug() << "\nMemData::loadData: Data doesn't fit in Memory\n";
            break;
        }
    }
    if( pauseSim ) Simulator::self()->runContinuous();
}

void MemData::saveData( QVector<int> data )
{
    QString dir = Circuit::self()->getFileName();
    dir.replace( ".simu", ".data" );

    QString  fileName = QFileDialog::getSaveFileName( 0l
                                , QCoreApplication::translate( "MemData", "Save Data" ), dir
                                , QCoreApplication::translate( "MemData", "All files (*.*)") );

    if( fileName.isEmpty() ) return; // User cancels saving

    bool pauseSim = Simulator::self()->isRunning();
    if( pauseSim )  Simulator::self()->pauseSim();

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
    QFile outFile( fileName );

    if( !outFile.open(QFile::WriteOnly | QFile::Text) )
    {
          QMessageBox::warning(0l, "MemData::saveData",
          QCoreApplication::translate( "MemData", "Cannot write file %1:\n%2.").arg(fileName).arg(outFile.errorString()));
    }
    QTextStream toFile( &outFile );
    toFile << output;
    outFile.close();

    if( pauseSim ) Simulator::self()->runContinuous();
}

