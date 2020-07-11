#ifndef STUDENT_H
#define STUDENT_H

//Aleksander Brown
//alekjbrown@live.com
//july 5,2020

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    static int idGen; //static id counter (init in main file before main method)
    int id;
    string name;
    double gpa;

public:
    Student()
    {
        name = "Bob";   // Student's name
        idGen++;        //increment static id
        id = idGen;     // Student ID number
        gpa = 1.0;      // Current GPA
    }
    Student(string n, double g)
    {
        idGen++;        // increment static id
        id = idGen;     // Student ID number
        name = n;       // Student's name
        gpa = g;        // Current GPA
    }
    void setId(int);
    void setName(string);
    void setGpa(double);
    int getId() const;
    string getName() const;
    double getGpa() const;
    void display();
};
void Student::setId(int id)
{
    this->id = id;
}
void Student::setName(string name)
{
    this->name = name;
}
void Student::setGpa(double gpa)
{
    this->gpa = gpa;
}
int Student::getId() const
{
    return id;
}
string Student::getName() const
{
    return name;
}
double Student::getGpa() const
{
    return gpa;
}
void Student::display()
{
    cout << id << endl;
    cout << name << endl;
    cout << gpa << endl;
}

#endif // !STUDENT_H
