//Aleksander Brown
//alekjbrown@live.com
//June 11,2020

/** This program demonstrates return type functions */

#include <iostream>
using namespace std;

const int SIZE = 4;
int temp[SIZE] = {};

//prototypes
double averageFourTemperatures();
void displayTemps(double average);

int main()
{
    bool valid = false;
    double average = 0;

    for (int i = 0; i < SIZE; i++)
    {
        while (!valid)
        {
            cout << "Enter a temperature" << endl;
            if (cin >> temp[i])
            {
                valid = true;
            }
            else
            {
                cin.clear();
                cin.ignore(80, '\n');
                cout << "Invalid entry, enter an int value for temperature" << endl;
            }
        }
        valid = false;
    }

    average = averageFourTemperatures();
    displayTemps(average);

    return 0;
}

//function to calculate average
double averageFourTemperatures()
{
    double average = 0;
    double total = 0;

    for (int val : temp)
    {
        total += val;
    }
    average = static_cast<double>(total / SIZE);

    return average;
}

//funtion to display temps and average
void displayTemps(double average)
{
    std::cout.precision(2);

    cout << "Teperatures are: " << endl;

    for (int val : temp)
    {
        cout << val << endl;
    }

    cout << "Average temperature is " << std::fixed << average << " degrees." << endl;
}

//INPUT        OUTPUT
//1,1,1,2      1.25 degrees
