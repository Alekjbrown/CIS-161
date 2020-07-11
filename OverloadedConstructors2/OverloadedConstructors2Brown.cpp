//Aleksander Brown
//alekjbrown@live.com
//july 5,2020

#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

int Student::idGen = 9;

int main()
{
    int const NUM_OF_STUDENTS = 5;
    Student students[NUM_OF_STUDENTS];
    bool valid = false;
    string stringInput;
    double doubleInput;

    for (int i = 0; i < NUM_OF_STUDENTS; i++)
    {
        cout << "Enter Name for student " << students[i].getId() << endl;
        cin.clear();
        getline(cin, stringInput);
        students[i].setName(stringInput);

        while (!valid)
        {
            cout << "Enter GPA for student " << students[i].getId() << endl;
            if (cin >> doubleInput)
            {
                valid = true;
                students[i].setGpa(doubleInput);
                cin.clear();
                cin.ignore(1024,'\n');
            }
            else
            {
                cin.clear();
                cin.ignore(1024, '\n');
                cout << "Invalid Entry, please enter a possible double" << endl;
            }
        }
        valid = false;
    }

    for (int i =0; i < NUM_OF_STUDENTS; i++)
    {
        cout << endl << "Student: ";
        students[i].display();
        cout << endl;
    }

    return 0;
}