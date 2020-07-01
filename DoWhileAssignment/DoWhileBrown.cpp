//Aleksander Brown
//alekjbrown@live.com
//june 10,2020

/** This program demonstrates a do-while loop using a sentinal value*/


/**    [psuedocode]
 create a loop variable
 cout << "variableName is " << variableName << endl;

 do
 // inside loop
 cout << "in loop, variableName is " << variableName << endl;
prompt for continue
while statement using variableName

 // loop execution complete
 cout << "loop complete, variableName is " << variableName << endl;
*/

#include<iostream>
using namespace std;

int main()
{
        char continueLoop = 'y';
    cout << "continueLoop is " << continueLoop << endl;

    do
    {
        cout << "in loop, continueLoop is " << continueLoop << endl;

        cout << "Do you want to continue (y/n)" << endl;
        cin >> continueLoop;
    } while (continueLoop == 'y');

    cout << "loop complete, continueLoop is " << continueLoop << endl;

    return 0;
}

//input: y  Behavior:loop continues
//input: any except y   Behavior: loop ends