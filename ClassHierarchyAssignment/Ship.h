#ifndef SHIP_H
#define SHIP_H

//Aleksander Brown
//alekjbrown@live.com
//July 8,2020
#include <string>
#include <iostream>
using namespace std;

class Ship
{
private:
    string name; //ship's name
    string year; //year ship was built
public:
    Ship(); //constructors
    Ship(string n, string y);
    ~Ship();                //destructor
    void setName(string n); //mutators
    void setYear(string y);
    string getName(); //accessors
    string getYear();
    // virtual string print();
    //function to print variables in class
    virtual string print()
    {
        return "Name = " + getName() + ", year = " + getYear();
    }
};

#endif // !SHIP_H