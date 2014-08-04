/* 
 * File:   CVSG.cpp
 * Author: luowf
 * 
 * Created on July 31, 2014, 7:49 PM
 */

#include "CVSG.h"

CVSG::CVSG() : pAircraftCarrier(NULL), name("") {
    vecShipboardAircraft.empty();
}

CVSG::CVSG(const CVSG& orig) {
}

CVSG::~CVSG() {
}

AircraftCarrier* CVSG::CreateAircraftCarrier() {
    
}

ShipboardAircraft* CVSG::AddShipboardAircraft() {
    
}
