#ifndef STUDENT_H
#define STUDENT_H

//Aleksander Brown
//alekjbrown@live.com
//July 7,2020

/* Header File for student class */

#include "person.h"

class Student : public Person
{
private:
    string major;       //student's major

public:
    Student();                                  //constructor
    Student(string, string, string, string);    //override constructor
    ~Student();                                 //destructor
    void setMajor(string m);                    //mutator
    string getMajor();                          //accessor
    string print();                             //print function
};

#endif // !STUDENT_H