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

#include "connector.h"
#include "circuit.h"
#include "bus.h"

Component* Bus::construct( QObject* parent, QString type, QString id )
{
        return new Bus( parent, type, id );
}

LibraryItem* Bus::libraryItem()
{
    return new LibraryItem(
        tr( "Bus" ),
        tr( "Logic/Other Logic" ),
        "outbus.png",
        "Bus",
        Bus::construct );
}

Bus::Bus( QObject* parent, QString type, QString id )
   : Component( parent, type, id )
   , eBus( id.toStdString() )
{
    setNumLines( 8 );                           // Create Input Pins
    
    m_busPin = new Pin( 0, QPoint( 8, 0 ), m_id+"-ePin0", 1, this );
    m_busPin->setIsBus( true );
    m_pin[0] = m_busPin;
}
Bus::~Bus(){
}

void Bus::setNumLines( int lines )
{
    if( lines == m_numLines ) return;
    if( lines < 1 ) return;

    for( int i=1; i<=m_numLines; i++ )
    {
        if( m_pin[i]->isConnected() ) m_pin[i]->connector()->remove();
        if( m_pin[i]->scene() ) Circuit::self()->removeItem( m_pin[i] );
        delete m_pin[i];
    }
    m_numLines = lines;

    m_pin.resize( lines+1 );
    
    for( int i=1; i<=lines; i++ )
    {
        m_pin[i] = new Pin( 180, QPoint(-8,-8*lines+(i-1)*8+8 )
                               , m_id+"-ePin"+QString::number(i), i, this );
    }
    m_height = lines-1;
    m_area = QRect( -2, -m_height*8-4, 4, m_height*8+8 );
    Circuit::self()->update();
}

void Bus::initialize()
{
    if( !m_busPin->isConnected() ) return;
    
    //qDebug() << "\nBus::initialize()" << m_numLines;

    for( int i=1; i<=m_numLines; i++ )
    {
        QList<ePin*> epins;
        
        if( m_pin[i]->isConnected() )
        {
            Pin* pin = m_pin[i];
            eNode* enode = pin->getEnode();
            
            if( enode )
            {
                pin->findConnectedPins(); // All connected pins will register in eNode 
                epins = enode->getSubEpins();
                //foreach( ePin* epin, epins )  epin->setEnode( 0l );
                //pin->setEnode( 0l );
            }
            eNode* busEnode = m_busPin->getEnode();
            if( busEnode ) busEnode->addBusPinList( epins, m_startBit+i );
        }
    }
}

void Bus::inStateChanged( int msg )  // Called by m_busPin when removing
{
    if( msg != 3 ) return;                    // Only accept remove msgs
    
    for( int i=1; i<=m_numLines; i++ )
    {
        QList<ePin*> epins;
        
        if( m_pin[i]->isConnected() )
        {
            Pin* pin = m_pin[i];
            eNode* enode = pin->getEnode();
            
            if( enode )
            {
                pin->findConnectedPins(); // All connected pins will register in eNode 
                epins = enode->getSubEpins();
                
                eNode* enode = new eNode( m_id+"eNode"+QString::number( i ) );
                foreach( ePin* epin, epins )  epin->setEnode( enode );
            }
        }
    }
}

void Bus::paint( QPainter *p, const QStyleOptionGraphicsItem *option, QWidget *widget )
{
    Component::paint( p, option, widget );

    
    if( Circuit::self()->animate() )
    {
        QPen pen = p->pen();

        /*if( m_driving )
        {
            pen.setColor( QColor( 200, 50, 50 ) );
            p->setPen(pen);
            p->drawLine( 7, 0, 3, 3 );
            p->drawLine( 7, 0, 3,-3 );
        }
        else
        {
            pen.setColor( QColor( 50, 50, 200 ) );
            p->setPen(pen);
            p->drawLine( 1, 0, 5, 3 );
            p->drawLine( 1, 0, 5,-3 );
        }*/
        pen.setColor( Qt::black );
        p->setPen(pen);
    }

    QPen pen = p->pen();
    pen.setWidth(3);
    p->setPen(pen);

    p->drawRect( QRect( 0, -m_height*8, 0, m_height*8 ) );
}

#include "moc_bus.cpp"
