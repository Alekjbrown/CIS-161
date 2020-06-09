//Aleksander Brown
//alekjbrown@live.com
//june 03, 2020

#include <iostream>

using namespace std;

int main()
{
    const int passing = 7;
    int score;

    cout << "Input a score betweein 1 & 10" << endl;
    cin >> score;

    cout << "Your test score of " << score << " ";

    if (score >= passing){
        cout << "is passing!" << endl;
    }
    else{
        cout << "is not passing!" << endl;
    }

    return 0;
}