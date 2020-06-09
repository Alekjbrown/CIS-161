//============================================================================
// Name        : IntArithmetic.cpp
// Author      : Michelle Ruse
// Version     :
// Copyright   : Your copyright notice
// Description : Arithmetic using int data type in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = b = 0;

    cout << "Enter a number: ";
    cin >> a;

    cout << "\nEnter a number: ";
    cin >> b;

    cout << "Addition:           " << (a + b) << endl;
    cout << "Subtraction:        " << (a - b) << endl;
    cout << "Multiplication:     " << (a * b) << endl;
    cout << "Division:           " << (a / b) << endl;
    cout << "Modulo (remainder): " << (a % b) << endl;
    return 0;
}
// Test Data
// a = 5, b = 7
// Results
// Enter a number: 5
//
// Enter a number: 7
// Addition:           12
// Subtraction:        -2
// Modulo (remainder): 5