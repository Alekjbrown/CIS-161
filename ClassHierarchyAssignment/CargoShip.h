#ifndef CARGOSHIP_H
#define CARGOSHIP_H

//Aleksander Brown
//alekjbrown@live.com
//July 8,2020

/* class for cruise ship derived from ship*/
#include "Ship.h"

class CargoShip : public Ship
{
private:
    int cargoCap; //maximum cargo on ship
public:
    CargoShip(); //constructors
    CargoShip(string n, string y, int m);
    ~CargoShip();            //destructor
    void setCargoCap(int m); //mutator
    int getCargpCap();       //accessor
    // string print();
    //function to print variables
    virtual string print() override
    {
        return "Name = " + getName() + ", Max cargo = " + to_string(getCargpCap());
    }
};

#endif // !CargoShip_H
