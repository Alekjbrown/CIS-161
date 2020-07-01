//Aleksander Brown
//alekjbrown@live.com
//June 11,2020

/** This program demonstrates overloading functions */

#include <iostream>
#include <string>
using namespace std;

//prototypes
void ticketSearch();
void ticketSearch(int number);
void ticketSearch(int number, double maxPrice);
void ticketSearch(int number, double maxPrice, string section);

int main()
{
    //set precision
    std::cout.precision(2);

    //calls to each function using different parameters
    ticketSearch();
    ticketSearch(5);
    ticketSearch(10,45.55);
    ticketSearch(2,25.75,"balcony");

    return 0;
}

//
void ticketSearch()
{
    cout << "Looking for any ticket" << endl;
}

void ticketSearch(int number)
{
    cout << "Looking for " << number << " ticket(s) at any price in any section." << endl;
}

void ticketSearch(int number, double maxPrice)
{
    cout << "Looking for " << number << " ticket(s) at a max price of $" << std::fixed << maxPrice << " in any secion." << endl;
}

void ticketSearch(int number, double maxPrice, string section)
{
    cout << "Looking for " << number << " ticket(s) at a max price of $" << std::fixed << maxPrice << " in the " << section << " section." << endl;
}