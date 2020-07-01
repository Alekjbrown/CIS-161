//Aleksander Brown
//alekjbrown@live.com
//Nick 0 Hofmann
//Robby A Nervig
//june 09,2020

#include <iostream>
using namespace std;

int main()
{
    const int distance = 350;
    char runAgain = 'y';
    int avgSpeed;
    int hours;

    do
    {
        cout << "What is your average speed?" << endl;
        cin >> avgSpeed;

        hours = distance / avgSpeed;

        cout << "Hour   Miles" <<endl;

            for(int i = 1; i <= hours ; i++ )
            {
                cout << i << "    " << avgSpeed * i << endl;
            }

        cout << "Welcome to St. Louis" << endl;

        cout<< endl;
        cout<< "Do you want to go again?" << endl;
        cin >> runAgain;

    } while (runAgain == 'y');



    return 0;
}
