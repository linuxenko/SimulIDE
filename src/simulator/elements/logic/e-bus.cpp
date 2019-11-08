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

#include <math.h>
#include <QDebug>

#include "e-bus.h"

eBus::eBus( std::string id )
    : eElement( id )
{
    m_numLines = 0;
    m_startBit = 0;
}
eBus::~eBus()
{ 
}

void eBus::initialize()
{
    /*for( int i=0; i<m_numInputs; i++ )
    {
        eSource* esource = m_input[i];
        eNode* enode = esource->getEpin()->getEnode();
        if( enode ) enode->addToChangedFast(this);
    }

    eNode* enode = m_output[0]->getEpin()->getEnode();
    if( enode ) enode->addToChangedFast(this);*/
}

void eBus::resetState()
{
    /*setInputHighV( 2.5 );
    setInputLowV( 2.5 );
    for( int i=0; i<m_numInputs; i++ )
    {
        m_threshold = (m_inputHighV+m_inputLowV)/2;
        eSource* esource = m_input[i];
        esource->setImp( 1e7 );
        esource->setVoltHigh( m_threshold );
        esource->setVoltLow( m_threshold );
        esource->stampOutput();
    }
    m_output[0]->setImp( 1e7 );
    m_output[0]->setVoltHigh( -1 );
    m_output[0]->setVoltLow( -1 );
    m_output[0]->setOut( true );
    m_output[0]->stampOutput();
    
    m_driving = false;*/
}

void eBus::setStartBit( int bit ) 
{ 
    if( bit < 0 ) bit = 0;
    m_startBit = bit; 
}

void eBus::initEpins()
{
    setNumEpins( m_numLines+1 );
}

void eBus::setNumLines( int lines )
{
    if( lines == m_numLines ) return;
    if( lines < 1 ) lines = 1;
    
    m_numLines = lines;
}

void eBus::setVChanged()
{

}

