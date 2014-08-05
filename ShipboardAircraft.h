/* 舰载机
 * File:   ShipboardAircraft.h
 * Author: luowf
 *
 * Created on August 1, 2014, 9:26 AM
 */

#ifndef SHIPBOARDAIRCRAFT_H
#define	SHIPBOARDAIRCRAFT_H

#include "stdafx.h"

class ShipboardAircraft {
protected:
    ShipboardAircraft();
    ShipboardAircraft(const ShipboardAircraft& orig);
    virtual ~ShipboardAircraft();
    
public:
    void SetName(const string& name)
    {
        m_name = name;
    }
    
    string GetName()
    {
        return m_name;
    }
    
private:
    string m_name;
    
    friend class CVSG;
};

#endif	/* SHIPBOARDAIRCRAFT_H */

