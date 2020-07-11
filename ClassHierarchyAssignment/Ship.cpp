//Aleksander Brown
//alekjbrown@live.com
//July 8,2020

/* ship class function definitions */

#include "Ship.h"

//Constructor
Ship::Ship()
{

}

//overload constructor
Ship::Ship(string n, string y)
{
    name = n;
    year = y;
}

//destructor
Ship::~Ship()
{

}

//mutator for name
void Ship::setName(string n)
{
    name = n;
}

//mutator for year
void Ship::setYear(string y)
{
    year = y;
}

//accessor for name
string Ship::getName()
{
    return name;
}

//accessor for year
string Ship::getYear()
{
    return year;
}

// //function to print variables in class
// string Ship::print()
// {
//     return "Name = " + getName() + ", year = " + getYear();
// }