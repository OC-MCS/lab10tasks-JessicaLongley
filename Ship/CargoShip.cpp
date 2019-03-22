#include <iostream>
#include <string>
#include "CargoShip.h"
#include "Ship.h"

CargoShip::CargoShip(int c, string n, string y) :Ship(n, y)
{
    capacity = c;
}
CargoShip::CargoShip(int c, Ship S) : Ship(S.getName(), S.getYearBuilt())
{
    capacity = c;
}
int CargoShip::getCap() const
{
    return capacity;
}
void CargoShip::newCap(int c)
{
    capacity = c;
}
void CargoShip::print() const
{
    cout << "Name: " << getName() << endl;
    cout << "Cargo Capacity: " << getCap() << endl << endl;
}