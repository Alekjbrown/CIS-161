//Aleksander Brown
//alekjbrown@live.com
//July 8,2020

/* function definitions for cruiseship class*/

#include "CargoShip.h"

//constructor
CargoShip::CargoShip():Ship()
{

}

//overload constructor
CargoShip::CargoShip(string n, string y, int m):Ship(n,y)
{
    cargoCap = m;
}

//destructor
CargoShip::~CargoShip()
{

}

//mutator
void CargoShip::setCargoCap(int m)
{
    cargoCap = m;
}

//accessor
int CargoShip::getCargpCap()
{
    return cargoCap;
}

// //function to print variables
// string CargoShip::print()
// {
//     return "Name = " + getName() + ", Max cargo = " + to_string(getCargpCap());
// }