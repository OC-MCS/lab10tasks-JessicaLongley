#include "FuelGauge.h"
#include <iostream>

using namespace std;

//defalt constructor. Sets fuel amount to zero.
FuelGauge::FuelGauge()
{
    fuel = 0;
}
//increment to amount of fuel by 1 gallon. This simulates putting fuel in the car. (The car can hold a maximum of 15 gallons)
void FuelGauge::moreFuel()
{
    if (fuel < 15)
    {
        fuel++;
    }
}
//decrement the amount of fuel bu 1 gallon, if the amount of fuel is greater than 0 gallons. This simulates the fuel as the car runs
void FuelGauge::lessFuel()
{
    if (fuel > 0)
    {
        fuel--;
    }
}
//report the car's current amount of fuel, in gallons
int FuelGauge::getFuelAmount()
{
    return fuel;
}

