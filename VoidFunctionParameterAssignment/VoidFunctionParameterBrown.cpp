//Aleksander Brown
//alekjbrown@live.com
//june 11,2020

//This program demonstrates function call from functions

#include <iostream>
using namespace std;

//prototypes
void averageFourTemperatures(int temp1, int temp2, int temp3, int temp4);
void displayTemps(int temp1, int temp2, int temp3, int temp4, double average);

int main()
{
    int temp1 = 0;
    int temp2 = 0;
    int temp3 = 0;
    int temp4 = 0;

    cout << "Enter first temperature." << endl;
    cin >> temp1;
    cout << "Enter second temperature." << endl;
    cin >> temp2;
    cout << "Enter second temperature." << endl;
    cin >> temp3;
    cout << "Enter third temperature." << endl;
    cin >> temp4;

    averageFourTemperatures(temp1,temp2,temp3,temp4);

    return 0;
}

//function to calculate average and call display function
void averageFourTemperatures(int temp1, int temp2, int temp3, int temp4)
{
    double average = 0;

    average = static_cast<double>(temp1 + temp2 + temp3 + temp4) / 4;

    displayTemps(temp1,temp2,temp3,temp4,average);
}

//funtion to display temps and average
void displayTemps(int temp1, int temp2, int temp3, int temp4, double average)
{
    std::cout.precision(2);

    cout<< "Teperatures are: " << endl << temp1 << endl << temp2 << endl << temp3 << endl << temp4 << endl;
    cout << "Average temperature is " << std::fixed << average << " degrees." << endl;
}