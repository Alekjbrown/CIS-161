#ifndef BILL_H
#define BILL_H
#include <iostream>
using namespace std;

//class for bills
class Bills
{
private:
    int rent;
    double water;
    int garbage;
public:
    //functions
    Bills()                         //Constructor
    {
        rent = 500;
        water = 100;
        garbage = 30;
    }
    void setRent(int);              //Mutators to change values
    void setWater(double);
    void setGarbage(int);
    int getRent() const;            //Accessors to poll values
    double getWater() const;
    int getGarbage() const;
    double total();                 //Function to calculate total
};

void Bills::setRent(int x){this->rent = x;}
void Bills::setWater(double x){this->water = x;}
void Bills::setGarbage(int x){this->water = x;}
int Bills::getRent() const {return rent;}
double Bills::getWater() const {return water;}
int Bills::getGarbage() const {return garbage;}
double Bills::total() { return rent + water + garbage;}

#endif