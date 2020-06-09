//Aleksander Brown
//alekjbrown@live.com
//june 03, 2020

#include <iostream>
using namespace std;

int main()
{
    const int passing = 7;
    int score;

    cout << "Input score between 1 & 10" << endl;
    cin >> score;

    cout << "Your score of " << score << ((score >= passing) ? " is passing!":" is not passing!") << endl;

    return 0;
}

// input        output
//  1           is not passing
//  7           is passing