//Aleksander Brown
//alekjbrown@live.com
//June 27,2020

#include <iostream>
using namespace std;

enum bracket {SINGLE, MARRIEDFJ, MARRIEDF5, Head, QWIDOWERWCHILD};


int main()
{


    int rate[] = {35,20,33,25,15};

    for(bracket taxBracket = SINGLE; taxBracket <= QWIDOWERWCHILD; taxBracket = bracket(taxBracket + 1))
    {
        cout << taxBracket << ": " << rate[taxBracket] << endl;
    }

    return 0;
}