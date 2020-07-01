//Aleksander Brown
//alekjbrown@live.com
//June 11,2020

/** this program demonstrates passing variables by reference */

#include <iostream>
#include <string>
using namespace std;

void update(int &num1, double &num2, string &message);

int main()
{
    std::cout.precision(2);

    int num1 = 0;
    double num2 = 0;
    string message = "";

    //prompt, assign, and print
    cout << "Enter an integer" << endl;
    cin >> num1;
    cout << "You entered " << num1 << endl;
    cout << "Enter a double" << endl;
    cin >> num2;
    cout << "You entered " << std::fixed << num2 << endl;
    cout << "Enter a string" << endl;
    cin >> message;
    cout << "You entered " << message << endl;

    update(num1, num2, message);

    //print updated values
    cout << "num1 updated to " << num1 << endl;
    cout << "num2 updated to " << std::fixed << num2 << endl;
    cout << "message updated to " << message << endl;


    return 0;
}

void update(int &num1, double &num2, string &message)
{
    num1 += 10;
    num2 /= 2;
    message += "ub";
}