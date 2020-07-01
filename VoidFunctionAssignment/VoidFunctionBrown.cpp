//Aleksander Brown
//alekjbrown@live.com
//June 11,2020

//This program demonstrates functions

#include <iostream>
using namespace std;

//prototype
void averageTemperature();

int main()
{
    //call to function
    averageTemperature();

    return 0;
}

//average temperature function
void averageTemperature()
{
    const int SENTINEL = -999;
    int temp = 0;
    int tempTotal = 0;
    int numOfTemps = 0;
    double average = 0;
    bool valid = false;

    //set cout precision
    std::cout.precision(2);

    //temp entry loop
    do
    {
        //validation entry loop
        do
        {
            cout << "Enter a temperature or '-999' to quit." << endl;
            if (cin >> temp)
            {
                valid = true;
            }
            else
            {
                cin.clear();
                cin.ignore(80, '\n');
                cout << "Invalid Entry" << endl;
            }
        } while (!valid);

        if (temp == -999)
        {
            break;
        }

        tempTotal += temp;
        numOfTemps++;
        average = (static_cast<double>(tempTotal) / static_cast<double>(numOfTemps));

    } while (temp != -999);

    //print average
    cout << "The average temperature is " << std::fixed << average << " degrees." << endl;
}

//INPUT            OUTPUT
//10,10,10,10,5     9.00