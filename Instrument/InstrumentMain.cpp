// main code goes here
#include <iostream>
#include "FuelGauge.h"
#include "Odometer.h"
#include <string>

using namespace std;
int main()
{
    //test FuelGage

    //defalt contructor will set the fuel level to 0
    FuelGauge F;
    Odometer O;
    cout << "The Fuel Gauge is currently at: " << to_string(F.getFuelAmount()) << " gallons" << endl;
    cout << "The current milage is: " << to_string(O.getMilage()) << endl << endl;

    //fill car to 15 gallons. Using 17 as the max will prove that this car can only fill to 15 gallons.
    for (int i = 0; i < 17; i++)
    {
        F.moreFuel();
    }
    cout << "The Fuel Gauge is currently at: " << to_string(F.getFuelAmount()) << " gallons" << endl;
    cout << "The current milage is: " << to_string(O.getMilage()) << endl << endl;

    //increment the odometer until the car runs out of fuel

    while(F.getFuelAmount() > 0)
    {
        O.addMile(F);
        cout << "Fuel: " << to_string(F.getFuelAmount()) << " gallons" << endl;
        cout << "Milage: " << to_string(O.getMilage()) << endl << endl;
    }




    return 0;
}