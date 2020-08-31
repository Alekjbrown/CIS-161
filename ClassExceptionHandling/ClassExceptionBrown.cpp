//Aleksander brown
//alekjbrown@live.com
//July 14, 2020

//this program demonstrates class exception handling

#include "TestScores.cpp"
#include <iostream>
using namespace std;

int main()
{
    int array[5] = {50, 100, -1, 100}; //initialize array, 3rd value is out of range

    TestScores tests(array);

    try
    {
        cout << tests.avg() << endl;
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }

    return 0;
}