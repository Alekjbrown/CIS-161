//Aleksander Brown
//alekjbrown@live.com
//July 7,2020

#include <iostream>
#include "person.cpp"
#include "student.cpp"
using namespace std;

int main()
{
    Student student("Alek","Brown","Mr","CIS");

    cout << student.print() << endl;

    return 0;
}