/* 航空母舰
 * File:   AircraftCarrier.h
 * Author: luowf
 *
 * Created on July 31, 2014, 8:03 PM
 */

#ifndef AIRCRAFTCARRIER_H
#define	AIRCRAFTCARRIER_H

#include "stdafx.h"


class AircraftCarrier {
protected:
    AircraftCarrier();
    AircraftCarrier(const AircraftCarrier& orig);
    virtual ~AircraftCarrier();
    
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

#endif	/* AIRCRAFTCARRIER_H */

