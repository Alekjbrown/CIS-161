//Aleksander brown
//alekjbrown@live.com
//July 15, 2020

//This program demonstrates function templates

#include <iostream>
using namespace std;

//min template
template <class T>
T minimum(T v1, T v2)
{
    if(v1 < v2)
    {
        return v1;
    }
    else
    {
        return v2;
    }

}

//max template
template <class T>
T maximum(T v1, T v2)
{
    if(v1 > v2)
    {
        return v1;
    }
    else
    {
        return v2;
    }

}

int main()
{
    int num1, num2;
    double num3, num4;

    num1 = 5;
    num2 = 10;
    num3 = 7.0;
    num4 = 12.0;

    //print statement for each function with two different types
    cout << "Minimum int " << minimum(num1, num2) << endl;
    cout << "Maximum int " << maximum(num1, num2) << endl;
    cout << "Minimum double " << minimum(num3, num4) << endl;
    cout << "Maximum double " << maximum(num3, num4) << endl;

    return 0;
}