#include <iostream>
#include <string>
#include "Ship.h"

using namespace std;

Ship::Ship(string n, string y)
{
    name = n;
    yearBuilt = y;
}
string Ship::getName() const
{
    return name;
}
string Ship::getYearBuilt() const
{
    return yearBuilt;
}
void Ship::changeName(string n)
{
    name = n;
}
void Ship::print() const
{
    cout << "Name: " << getName()<< endl;
    cout << "Year Built: " << getYearBuilt() << endl << endl;
}