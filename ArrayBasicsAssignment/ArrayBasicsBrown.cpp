//Aleksander Brown
//alekjbrown@live.com
//June 16,2020

/** this program demonstrates a basic array */

#include <iostream>
using namespace std;

//const for size
const int SIZE = 9;

//Declare and initialize
double arrayDub[SIZE]= {};

int main()
{
    bool valid = false;

//fill values to array
    for (int i = 0; i < SIZE ; i++)
    {
        //validate loop
        while (!valid)
        {
            cout << "Enter a double" << endl;
            if(cin >> arrayDub[i])
            {
                valid = true;

            }else
            {
                cin.clear();
                cin.ignore(80,'\n');
                cout << "Invalid Entry, enter doubles only" << endl;
            }
        }
        valid = false;
    }

//print from array
    cout << "First: " << arrayDub[0] << endl;
    cout << "Median: " << arrayDub[4] << endl;
    cout << "last: " << arrayDub[SIZE - 1] << endl;

    return 0;
}