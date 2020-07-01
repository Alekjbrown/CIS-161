//Aleksander Brown
//alekjbrown@live.com
//June 18,2020

/** this program demonstrates passing by pointer */

#include <iostream>
using namespace std;

int doSomething(int* x, int* y);

int main()
{
    int x = 5;
    int y = 10;

    cout << doSomething(&x,&y) << endl; // called with the address of x and y

    return 0;
}

int doSomething(int* x, int* y)
{
     int temp = *x;
     *x = *y * 10;
     *y = temp * 10;
     return *x + *y;
}