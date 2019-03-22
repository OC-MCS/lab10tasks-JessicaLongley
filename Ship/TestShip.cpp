#include <iostream>
#include"Ship.h"
#include"CruiseShip.h"
#include"CargoShip.h"

using namespace std;

int main()
{

    //array of ship pointers
    //initialized with the address of dynamically allocated ship, cruiseship and cargoship opjects
    const int NUM_SHIPS = 3;

// ships is an array of Ship pointers.
// Each element of ships is initialized with the
// address of a dynamically allocated object.
    Ship *ships[NUM_SHIPS] =
    { new Ship("SS.Boat", "1999"),
      new CruiseShip(400, "BigBoat", "2002"),
      new CargoShip(1000, "SS.Heavy", "2008"),
    };

    // Display the data for each element in the array.
    for (int count = 0; count < NUM_SHIPS; count++)
    {
        cout << "Ship #" << (count + 1) << ":\n";
        ships[count]->print();  //DO WE USE THIS FOR FUNCTIONS?
        cout << endl;
    }

    ////old display test
    //Ship S("SS.Boat", "1999");
    //cout << "The ship's name is: " << S.getName() << endl;
    //cout << "The ship was built in: " << S.getYearBuilt() << endl;
    //S.changeName("SS.Sam");
    //cout << "After changing the ship's name, the ship's name is: " << S.getName() << endl << endl;
    //cout << "Using print function: ";
    //S.print();
    //cout << endl << endl;

    //CruiseShip C(400, "BigBoat", "2002");
    //cout << "This ship's maximum capicity is: " << C.getMax() << endl;
    //cout << "The ship's name is: " << C.getName() << endl;
    //cout << "The ship was built in: " << C.getYearBuilt() << endl;
    //C.changeName("SeriouslyBigBoat");
    //cout << "After changing the ship's name, the ship's name is: " << C.getName() << endl << endl;
    //cout << "Using print function: ";
    //C.print();
    //cout << endl << endl;

    //CargoShip B(1000, "SS.Heavy", "2008");
    //cout << "This ship's cargo capicity in tonnage is: " << B.getCap() << endl;
    //cout << "The ship's name is: " << B.getName() << endl;
    //cout << "The ship was built in: " << B.getYearBuilt() << endl;
    //B.changeName("StillHeavy");
    //cout << "After changing the ship's name, the ship's name is: " << B.getName() << endl << endl;
    //cout << "Using print function: ";
    //B.print();
    //cout << endl << endl;

    return 0;
}