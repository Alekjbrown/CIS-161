//============================================================================
// Name        : TypeConversion.cpp
// Author      : Aleksander Brown
// Version     :
// Copyright   : Your copyright notice
// Description : casting in C++, Ansi-style
//============================================================================

#include <limits>
#include <cstddef>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int value;
    double number = 16.23;

    value = static_cast<int>(number);
    cout << setprecision(2) << value << endl;

    double value2;
    int num = 12;

    value2 = static_cast<double>(num);
    cout << setprecision(2) << value2 <<endl;

    return 0;
}