//Aleksander Brown
//alekjbrown@live.com
//June 23,2020

/** This program demonstrates struct array and passing them to functions for use.*/

#include <iostream>
#include "Bill.h"
using namespace std;

int main()
{
    //instantiate 3 objects 1st using default constructor
    Bills bill1;
    Bills bill2;
    bill2.setRent(1000);
    bill2.setWater(50);
    bill2.setGarbage(10);
    Bills bill3;
    bill3.setRent(800);
    bill3.setWater(10);
    bill3.setGarbage(5);

    Bills month[3] = {bill1,bill2, bill3};

    //for each loop to display values
    for(auto var: month)
    {
        cout << "Rent: " << var.getRent() << endl;
        cout << "Water: " << var.getWater() << endl;
        cout << "Garbage: " << var.getGarbage() << endl;
        cout << "Total: " << var.total() << endl;
        cout << endl;
    }

    return 0;
}