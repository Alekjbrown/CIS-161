//Aleksander Brown
//alekjbrown@live.com
//July 7,2020

/* function definitions for student class */

#include "student.h"

//Constructor
Student::Student():Person()
{

}

//Overload constructor
Student::Student(string fn, string ln, string h, string m):Person(fn,ln,h)
{
    major = m;
}

//destructor
Student::~Student()
{

}

//Major mutator
void Student::setMajor(string m)
{
    major = m;
}

//Major accessor
string Student::getMajor()
{
    return major;
}

//function to print student variables
string Student::print()
{
    return Person::print() + " " + major;
}