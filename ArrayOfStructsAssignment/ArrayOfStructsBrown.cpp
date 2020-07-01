//Aleksander Brown
//alekjbrown@live.com
//June 23,2020

/** This program demonstrates struct array and passing them to functions for use.*/

#include <iostream>
using namespace std;

//struct for bills
struct bills
{
    int rent;
    double gas;
    double water;
    int garbage;
    string donation;
    double total = rent + gas + water + garbage;
};

enum bill
{
    Rent,
    Gas,
    Water,
    Garbage,
    Donation
};

//prototype

double * average(bills arr[]);

//global constant for array size
const int SIZE = 4;

int main()
{
    bills months[SIZE] = {};
    bool valid = false;
    double total = 0;

    for (int i = 0; i < SIZE; i++)
    {
        int month = i + 1; // add 1 to index for output of month

        //prompt and validate input for rent
        while (!valid)
        {
            cout << "Enter rent for month " << month << endl;
            if (cin >> months[i].rent && months[i].rent > -1)
            {
                valid = true;
            }
            else
            {
                cin.clear();
                cin.ignore(1024, '\n');
                cout << "Invalid entry, please enter a positive integer" << endl;
            }
        }
        valid = false;

        //prompt and validate input for gas
        while (!valid)
        {
            cout << "Enter Gas for month " << month << endl;
            if (cin >> months[i].gas && months[i].gas > -1)
            {
                valid = true;
            }
            else
            {
                cin.clear();
                cin.ignore(1024, '\n');
                cout << "Invalid entry, please enter a positive double" << endl;
            }
        }
        valid = false;

        //prompt and validate input for water
        while (!valid)
        {
            cout << "Enter water for month " << month << endl;
            if (cin >> months[i].water && months[i].water > -1)
            {
                valid = true;
            }
            else
            {
                cin.clear();
                cin.ignore(1024, '\n');
                cout << "Invalid entry, please enter a positive double" << endl;
            }
        }
        valid = false;

        //prompt and validate input for Garbage
        while (!valid)
        {
            cout << "Enter garbage for month " << month << endl;
            if (cin >> months[i].garbage && months[i].garbage > -1)
            {
                valid = true;
            }
            else
            {
                cin.clear();
                cin.ignore(1024, '\n');
                cout << "Invalid entry, enter a positive integer" << endl;
            }
        }
        valid = false;

        //prompt and validate input for Donation

            cout << "Enter donation for month " << month << endl;
            cin.clear();
            cin.ignore(1024,'\n');
            getline(cin, months[i].donation);

        months[i].total = months[i].rent + months[i].gas + months[i].water + months[i].garbage;
    }

    //assign pointer to array returned by function
    double *averages = average(months);

    for (int i = 0; i < SIZE; i++)
    {
        total += months[i].total;
    }

    std::cout.precision(2);
    cout << "On average for four months you spent:" <<endl;
    cout << "$" << std::fixed << *averages+Rent << " on Rent." <<endl;
    cout << "$" << std::fixed << *averages+Gas << " on Gas." << endl;
    cout << "$" << std::fixed << *averages+Water << " on Water." << endl;
    cout << "$" << std::fixed << *averages+Garbage << " on Garbage." << endl;
    cout << "For a total of $" << total << " over all 4 months" << endl;

    return 0;
}

//take in array of months and average each bill into an array
//returns array of averages as a pointer positioned by enum list
double * average(bills arr[])
{
    static double averages[SIZE] = {};
    for (int i = 0; i < SIZE; i++)
    {
        averages[Rent] += static_cast<double>(arr[i].rent);
        averages[Gas] += static_cast<double>(arr[i].gas);
        averages[Water] += static_cast<double>(arr[i].water);
        averages[Garbage] += static_cast<double>(arr[i].garbage);
    }

    for (int i = 0; i < SIZE; i++)
    {
        averages[i] = averages[i] / SIZE;
    }

    return averages;
}