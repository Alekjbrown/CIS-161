//Aleksander Brown
//alekjbrown@live.com
//July 7,2020

/* Person class function definitions */

#include "person.h"

//constructor
Person::Person()
{
}

//overload constructor
Person::Person(string first, string last, string honor)
{
    firstName = first;
    lastName = last;
    honorific = honor;
}

//destructor
Person::~Person()
{
}

//firstname mutator
void Person::setFirstName(string fn)
{
    firstName = fn;
}

//firstname accessor
string Person::getFirstName()
{
    return firstName;
}

//last name mutator
void Person::setLastName(string ln)
{
    lastName = ln;
}

//lastname accessor
string Person::getLastName()
{
    return lastName;
}

//honorific mutator
void Person::setHonorific(string h)
{
    honorific = h;
}

//honorific accessor
string Person::getHonorific()
{
    return honorific;
}

//function to print class variables
string Person::print()
{
    return honorific + " " + firstName + " " + lastName;
}