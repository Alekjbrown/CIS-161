//Aleksander Brown
//alekjbrown@live.com
//june 09,2020

//this program demonstrates validation on user input. loops until entry meets requirements

#include<iostream>
using namespace std;

int main()
{
    int guess;
    bool valid = false;

    while(!valid)
    {
    cout << "Guess a number between 1 and 100" << endl;
        if(cin >> guess && guess >0 && guess < 101)
        {
            valid = true;
        }else
        {
            cin.clear();
            cin.ignore(80,'\n');
            cout << "Invalid input" << endl;
        }
    }

    cout << "You guessed " << guess << endl;

    return 0;
}