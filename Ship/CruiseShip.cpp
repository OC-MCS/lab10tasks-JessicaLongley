#include <iostream>
#include "CruiseShip.h"
#include "Ship.h"

using namespace std;

CruiseShip::CruiseShip(int m,string n, string y):Ship(n,y)
{
    maxPassengers = m;
}
CruiseShip::CruiseShip(int m, Ship S) : Ship(S.getName(), S.getYearBuilt())
{
    maxPassengers = m;
}
int CruiseShip::getMax() const
{
    return maxPassengers;
}
void CruiseShip::print() const
{
    cout << "Name: " << getName() << endl;
    cout << "Maximum Number of Passengers: " << getMax() << endl << endl;
}