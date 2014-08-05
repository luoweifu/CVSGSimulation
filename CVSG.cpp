/* 航空母舰战斗群
 * 
 * File:   CVSG.cpp
 * Author: luoweifu
 * 
 * Created on July 31, 2014, 7:49 PM
 */

//==================================================

#include "CVSG.h"
#include "AircraftCarrier.h"
#include "ShipboardAircraft.h"

//==================================================

CVSG::CVSG() : m_pAircraftCarrier(NULL), m_name("") {
    m_vecShipboardAircraft.empty();
}

CVSG::CVSG(const CVSG& orig) {
}

CVSG::~CVSG() {
    if(m_pAircraftCarrier != NULL)
    {
        delete m_pAircraftCarrier;
        m_pAircraftCarrier = NULL;
    }
    for(ShipAircVec::iterator itr = m_vecShipboardAircraft.begin(); itr != m_vecShipboardAircraft.end(); itr ++)
    {
        if(*itr != NULL)
        {
            delete *itr;
            *itr = NULL;
        }
    }
    m_vecShipboardAircraft.clear();
}

AircraftCarrier* CVSG::CreateAircraftCarrier() {
    if(m_pAircraftCarrier == NULL)
    {
        m_pAircraftCarrier = new AircraftCarrier();
    }
    return m_pAircraftCarrier;
}

ShipboardAircraft* CVSG::AddShipboardAircraft() {
    ShipboardAircraft* pShipboardAircraft = new ShipboardAircraft();
    if(pShipboardAircraft != NULL)
    {
        m_vecShipboardAircraft.push_back(pShipboardAircraft);
    }
    return pShipboardAircraft;
}

void CVSG::SetName(const string& name)
{
    m_name = name;
}

string CVSG::GetName()
{
    return m_name;
}