//Aleksander Brown
//alekjbrown@live.com
//July 14 2020

//This program demonstrates exception handling

#include <iostream>
using namespace std;

//prototype
int multiply(int a, int b);

int main()
{
    int num1 = 0;   //first user number
    int num2 = 0;   //second user number

    //prompt 1
    cout << "Enter a number" << endl;
    cin >> num1;
    //prompt2
    cout << "Enter another number" << endl;
    cin >> num2;

    try {
    cout << multiply(num1, num2) << endl;
    }
    catch (const char* msg)
    {
        cerr << msg << endl;
    }

    return 0;
}

//takes in two numbers and returns the multiplied value or throws an exception if invalid values are given.
int multiply(int a, int b)
{
    if (a < 1 || a > 100 || b < 1 || a > 100 || a % 2 != 0 || a % 2 != 0)
    {
        throw "Invalid Value entered";
    }
    else
    {
        return a * b;
    }
}