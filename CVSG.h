/* 航空母舰战斗群
 * 
 * File:   CVSG.h
 * Author: luoweifu
 *
 * Created on July 31, 2014, 7:49 PM
 */

#ifndef CVSG_H
#define	CVSG_H

#include "stdafx.h"
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
    //创建航母
    AircraftCarrier* CreateAircraftCarrier();
    //添加舰载机
    ShipboardAircraft* AddShipboardAircraft();
    void SetName(const string& name);
    string GetName();
private:
    typedef vector<ShipboardAircraft*>  ShipAircVec;
    ShipAircVec            m_vecShipboardAircraft;
    AircraftCarrier*      m_pAircraftCarrier;
    string                m_name;
};

#endif	/* CVSG_H */

