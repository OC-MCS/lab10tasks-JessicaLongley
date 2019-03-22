#pragma once
#include "Ship.h"
#include <iostream>

using namespace std;

class CruiseShip : public Ship
{
    int maxPassengers;

public:
    CruiseShip(int m, string n, string y);
    CruiseShip(int, Ship);
    int getMax() const;
    virtual void print() const;
};
