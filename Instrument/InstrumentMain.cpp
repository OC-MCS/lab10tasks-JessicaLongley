// main code goes here
#include <iostream>
#include "FuelGauge.h"
#include <string>

using namespace std;
int main()
{
    //test FuelGage

    //defalt contructor will set the fuel level to 0
    FuelGauge F;
    cout << "The Fuel Gauge is currently at: " << to_string(F.getFuelAmount()) << " gallons" << endl;

    //fill car to 15 gallons. Using 17 as the max will prove that this car can only fill to 15 gallons.
    for (int i = 0; i < 17; i++)
    {
        F.moreFuel();
    }
    cout << "The Fuel Gauge is currently at: " << to_string(F.getFuelAmount()) << " gallons" << endl;



    return 0;
}