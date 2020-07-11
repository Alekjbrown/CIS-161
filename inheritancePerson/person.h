#ifndef PERSON_H
#define PERSON_H

//Aleksander Brown
//alekjbrown@live.com
//July 7,2020

#include <string>
#include <iostream>
using namespace std;

class Person
{
private:
    string firstName;   //person firstname
    string lastName;    //person lastname
    string honorific;   //person honorific

public:
    Person();                           //constructor
    Person(string, string, string);     //override constructor
    ~Person();                          //destructor
    void setFirstName(string fn);       //mutator
    string getFirstName();              //accessor
    void setLastName(string ln);        //mutator
    string getLastName();               //accessor
    void setHonorific(string h);        //mutator
    string getHonorific();              //accessor


    string print();                     //print method
};

#endif