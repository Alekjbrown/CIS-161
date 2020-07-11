#ifndef CRUISESHIP_H
#define CRUISESHIP_H

//Aleksander Brown
//alekjbrown@live.com
//July 8,2020

/* class for cruise ship derived from ship*/
#include "Ship.h"

class CruiseShip : public Ship
{
private:
    int maxPassengers; //maximum passengers on ship
public:
    CruiseShip(); //constructors
    CruiseShip(string n, string y, int m);
    ~CruiseShip();                //destructor
    void setMaxPassengers(int m); //mutator
    int getMaxPassengers();       //accessor
    // string print();
    //function to print variables
    virtual string print() override
    {
        return "Name = " + getName() + ", Max Passengers = " + to_string(getMaxPassengers());
    }
};

#endif // !CRUISESHIP_H