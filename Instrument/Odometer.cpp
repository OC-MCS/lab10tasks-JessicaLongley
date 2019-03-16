#include "Odometer.h" 
#include "FuelGauge.h"
#include <iostream>

using namespace std;

Odometer::Odometer()
{
    milage = 0;
}

//report the car's current milage
int Odometer::getMilage()
{
    return milage;
}

//increment the current milage by 1 mile. The maxium mileage the odometer can store is 999,999 miles.
//  When this amount is exceded, the odometer resets the current milage to 0
void Odometer::addMile(FuelGauge &fuelInst)
{
    if (milage < 1000000)
    {
        milage++;
    }
    else
    {
        milage = 0;
    }
    if (milage % 24 == 0)
    {
        fuelInst.lessFuel();
    }
}

