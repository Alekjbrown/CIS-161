//Aleksander brown
//alekjbrown@live.com
//July 15, 2020

//this program demonstrates Unit tests
#include <iostream>
#include <gtest/gtest.h>
using namespace std;




double avg(int arr[], int size);

TEST(AVGTest, PositiveNos)
{
    int array[4] = {50, 100, 25, 100};
    ASSERT_EQ(68,avg(array,4));
}

int main()
{
    const int SIZE = 4;
    int array[SIZE] = {50, 100, 25, 100}; //initialize array, 3rd value is out of range

    try
    {
        cout << avg(array,SIZE) << endl;
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }

    return 0;
}

//function for average
double avg(int arr[], int size)
{
    if (size < 1)
    {
        //exception
        throw "Size cannot be negative";
    }

    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }

    return total / size;
}