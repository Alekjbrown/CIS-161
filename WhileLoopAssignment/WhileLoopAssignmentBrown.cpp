//Aleksander Brown
//alekjbrown@live.com
//june 09,2020

/** this program demonstrates a while loop using a sentinal value*/

#include <iostream>
using namespace std;

int main()
{

    char continueLoop = 'y';
    cout << "continueLoop is " << continueLoop << endl;

    while (continueLoop == 'y') {
        cout << "in loop, continueLoop is " << continueLoop << endl;

        cout << "Do you want to continue (y/n)" << endl;
        cin >> continueLoop;

    }

    cout << "loop complete, continueLoop is " << continueLoop << endl;

    return 0;
}
