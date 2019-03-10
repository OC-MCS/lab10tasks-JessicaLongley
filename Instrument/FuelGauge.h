#pragma once
#include <iostream>

using namespace std;

//know the car's current amount of fuel in gallons
//report the car's current amount of fuel, in gallons
//increment to amount of fuel by 1 gallon. This simulates putting fuel in the car. (The car can hold a maximum of 15 gallons)
//decrement the amount of fuel bu 1 gallon, if the amount of fuel is greater than 0 gallons. This simulates the fuel as the car runs
class FuelGauge
{
    int fuel;
public:
	FuelGauge();
    void moreFuel();
    void lessFuel();
    int getFuelAmount();
};

