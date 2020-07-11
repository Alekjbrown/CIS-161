//Aleksander Brown
//alekjbrown@live.com
//July 8,2020

//Driver file testing Hierarchy classes

#include <iostream>
#include "Ship.cpp"
#include "CruiseShip.cpp"
#include "CargoShip.cpp"
using namespace std;

int main()
{
    const int SHIP_NUM = 3;
    string output = "";
    Ship *fleet[SHIP_NUM] = {
        new Ship("Boaty","2018"),
        new CruiseShip("Mc","2015",500),
        new CargoShip("Boatface","2016",12500)
    };

    for (int i = 0; i < SHIP_NUM; i++)
    {
        cout << fleet[i]->print() << endl;
    }

    return 0;
}