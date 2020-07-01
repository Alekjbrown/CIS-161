//Aleksander Brown
//alekjbrown@live.com
//June 25, 2020

// This program demonstrates a function that uses a
// pointer to a structure variable as a parameter.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student
{
    string name;     // Student's name
    int idNum;       // Student ID number
    int creditHours; // Credit hours enrolled
    double gpa;      // Current GPA
    string major;    // Student's major
    int satScore;    // Student's SAT score
};

void getData(Student *); // Function prototype

void printData(Student *); //Function prototype

int main()
{
    Student freshman;

    // Get the student data.
    cout << "Enter the following student data:\n";
    getData(&freshman); // Pass the address of freshman.
    printData(&freshman); // Pass the address of freshman.

    return 0;
}

//********************************************************
// Definition of function getData. Uses a pointer to a   *
// Student structure variable. The user enters student   *
// information, which is stored in the variable.         *
//********************************************************

void getData(Student *s)
{
    // Get the student name.
    cout << "Student name: ";
    getline(cin, s->name);

    // Get the student ID number.
    cout << "Student ID Number: ";
    cin >> s->idNum;

    // Get the credit hours enrolled.
    cout << "Credit Hours Enrolled: ";
    cin >> s->creditHours;

    // Get the GPA.
    cout << "Current GPA: ";
    cin >> s->gpa;

    //Get the Major
    cout << "Student Major: ";
    cin.ignore(1024,'\n');
    getline(cin, s->major);

    //Get the SAT Score
    cout << "Student's SAT Score: ";
    cin >> s->satScore;
}

void printData(Student *s)
{
    cout << "\nHere is the student data you entered:\n";

    // Now display the data stored in freshman
    cout << setprecision(3);
    // cout << "Name: " << freshman.name << endl;
    cout << "Name: " << s->name << endl;
    // cout << "ID Number: " << freshman.idNum << endl;
    cout << "ID Number: " << s->idNum << endl;
    // cout << "Credit Hours: " << freshman.creditHours << endl;
    cout << "Credit Hours: " << s->creditHours << endl;
    // cout << "GPA: " << freshman.gpa << endl;
    cout << "GPA: " << s->gpa << endl;
    cout << "Major: " << s->major << endl;
    cout << "SAT Score: " << s->satScore << endl;
}