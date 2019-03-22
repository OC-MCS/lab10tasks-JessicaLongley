#pragma once
#include <iostream>
#include "Ship.h"
#include <string>

using namespace std;

class CargoShip : public Ship
{
    int capacity;

public:
    CargoShip(int, string, string);
    CargoShip(int, Ship);
    int getCap() const;
    void newCap(int);
    virtual void print() const;
};
