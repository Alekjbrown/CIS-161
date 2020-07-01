//Aleksander Brown
//alekjbrown@live.com
//June 18,2020

#include <iostream>
#include <string>
using namespace std;

int main()
{

    const int SIZE = 5;
    float floatArray[SIZE] = {1, 2, 3, 4, 5};
    float floatArrayCopy[SIZE];
    copy(begin(floatArray), end(floatArray), begin(floatArrayCopy));
    float *faPtr = &floatArray[0];
    float *facPtr = &floatArrayCopy[0];
    string same = "";

    cout << "Incremental Addresses: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Address of " << i << " is " << &floatArray[i] << endl;
    }
    cout << endl;

    cout << "Decremental Addresses: " << endl;
    for (int i = SIZE - 1; i > -1; i--)
    {
        cout << "Address of " << i << " is " << &floatArray[i] << endl;
    }
    cout << endl;

    same = (*faPtr == *facPtr) ? "yes" : "no";
    cout << "Are the memory locations the same for both arrays? " << same << "." << endl;

    return 0;
}