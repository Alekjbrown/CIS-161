//Aleksander Brown
//alekjbrown@live.com
//June 17,2020

/** This program passes arrays to functions to fill and find values */

#include <iostream>
using namespace std;

// declare and initialize array to SIZE
const int SIZE = 5;
int numArray[SIZE] = {};

// declare and initialize range of numbers
const int rangeMax = 100;
const int rangeMin = 1;

//Prototypes
void getNumbers(int (&arr)[SIZE]);
int findMax(const int (&arr)[SIZE]);
int findMin(const int (&arr)[SIZE]);
int find(const int (&arr)[SIZE], int searchVal);

int main()
{
    int arr[SIZE] = {};
    int result = 0;

    getNumbers(numArray);

    cout << "Numbers in array:" << endl;
    for (int val : numArray)
    {
        cout << val << " | ";
    }
    cout << endl;

    cout << "Max value in array: " << findMax(numArray) << endl;
    cout << "Min value in array: " << findMin(numArray) << endl;

    cout << "Search for " << numArray[1] << ": ";
    result = find(numArray, numArray[1]);
    if (result == -1)
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found at index " << result << endl;
    }

    cout << "Search for " << rangeMax + 2 << ": ";
    result = find(numArray, rangeMax + 2);
    if (result == -1)
    {
        cout << "not found" << endl;
    }else
    {
        cout << "found at index " << result << endl;
    }


    return 0;
}

//pass array to get numbers by reference, written this way to pass actual array not a pointer
// This is necessary when arrays are global
void getNumbers(int (&arr)[SIZE])
{
    //range loop to fill array
    for (int &val : arr)
    {
        val = rand() % rangeMax + rangeMin;
    }
}

//pass array in and check values for maximum
int findMax(const int (&arr)[SIZE])
{
    //start max at min range -1 as all numbers in range will be higher
    int max = rangeMin - 1;

    for (int val : arr)
    {
        if (val > max)
            max = val;
    }

    return max;
}

// pass array in and check values for minimum
int findMin(const int (&arr)[SIZE])
{
    //start min at max range + 1 so all numbers in range will be smaller
    int min = rangeMax + 1;

    for (int val : arr)
    {
        if (val < min)
            min = val;
    }

    return min;
}

int find(const int (&arr)[SIZE], int searchVal)
{
    int index = -1;

    //Compare values to search value
    for (int i = 0; i < SIZE; i++)
    {
        // if found break loop and set found to true
        if (arr[i] == searchVal)
        {
            index = i;
            break;
        }
    }

    return index;
}

/*
no user input in driver code

output
Numbers in array:
84 | 87 | 78 | 16 | 94 |
Max value in array: 94
Min value in array: 16
Search for 87: found at index 1
Search for 102: not found
*/