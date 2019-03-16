#pragma once
#include <iostream>
#include "FuelGauge.h"

using namespace std;
//know the car's current milage
//report the car's current milage
//increment the current milage by 1 mile. The maxium mileage the odometer can store is 999,999 miles.
//  When this amount is exceded, the odometer resets the current milage to 0
//work with a FuelGage object. It should decrease the FuelGage object's current amount of fuel by 1 gallon for every 24 miles traveled.
//  (The car's fuel economy is 24 miles per gallon)
class Odometer
{
    int milage;
    
public:
	Odometer();
    int getMilage();
    void addMile(FuelGauge &fuelInst);
};