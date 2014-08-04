/* 航空母舰战斗群
 * File:   CVSG.h
 * Author: luowf
 *
 * Created on July 31, 2014, 7:49 PM
 */

#ifndef CVSG_H
#define	CVSG_H

#include <vector>
#include <string>

using namespace std;

class AircraftCarrier;
class ShipboardAircraft;

class CVSG {
protected:
    CVSG();
    CVSG(const CVSG& orig);
    virtual ~CVSG();
public:
    AircraftCarrier* CreateAircraftCarrier();
    ShipboardAircraft* AddShipboardAircraft();
    
private:
    vector<ShipboardAircraft*> vecShipboardAircraft;
    AircraftCarrier* pAircraftCarrier;
    friend class ShipboardAircraft;
    friend class AircraftCarrier;
    string name;
};

#endif	/* CVSG_H */

