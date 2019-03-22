#pragma once
#include <string>
#include <iostream>

using namespace std;

class Ship
{
    string name;
    string yearBuilt;

public:
    Ship(string n, string y);
    string getName() const;
    string getYearBuilt() const;
    void changeName(string n);
    virtual void print() const;//to print the ship's name and the year it was built
};
 