//Aleksander Brown
//alekjbrown@live.com
//July 8,2020

/* function definitions for cruiseship class*/

#include "CruiseShip.h"

//constructor
CruiseShip::CruiseShip():Ship()
{

}

//overload constructor
CruiseShip::CruiseShip(string n, string y, int m):Ship(n,y)
{
    maxPassengers = m;
}

//destructor
CruiseShip::~CruiseShip()
{

}

//mutator
void CruiseShip::setMaxPassengers(int m)
{
    maxPassengers = m;
}

//accessor
int CruiseShip::getMaxPassengers()
{
    return maxPassengers;
}

// //function to print variables
// string CruiseShip::print()
// {
//     return "Name = " + getName() + ", Max Passengers = " + to_string(getMaxPassengers());
// }