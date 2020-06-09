//Aleksander Brown
//alekjbrown@live.com
//June 03,2020

// Description : Display a user-determined number of random numbers, then
//               display the value of RAND_MAX in C++, Ansi-style.
//============================================================================

#include <iostream>

using namespace std;

int main()
{

    int counter = 0;
    //delcare and initialize a variable for use as a sentinel value, numRandomNumbers
    int numRandomNumbers = 0;

    // TODO: prompt user for input of number of random numbers to be display
    cout << "How many numbers would you like to see?" << endl;
    cin >> numRandomNumbers;
    // input numRandomNumbers from user

    while (counter < numRandomNumbers)
    {
        // output next random number
        cout << "random number " << counter + 1 << " = " << rand() << endl;
        counter++; // NOTE: use of unary increment operator
    }
    // output the value of RAND_MAX
    cout << "\x1b[35m" << RAND_MAX << endl;

    return 0;
}