//Aleksander Brown
//alekjbrown@live.com
//june 10,2020

/**this program demonstrates a for loop to enter test scores */

#include <iostream>
using namespace std;

int main()
{
    int score = 0;

    //sets iterations to 10 times for the loop
    const int iterations = 10;

    cout << "Score = 0" <<endl << endl;

    for(int i = 1; i <= iterations; i++)
    {
        cout << "Input a test score between 1 and 100" << endl;
        cin >> score;

        cout << "Test #" << i << " Score is " << score << "%" << endl;
    }

    cout << "Done" << endl << endl;

    return 0;
}

/**
 * INPUT     OUTPUT
 * 5            Test # 1 score is 5%
 * 10           Test # 2 score is 10%
 * 20           Test # 3 score is 20%
 * 30           Test # 4 score is 30%
 * 40           Test # 5 score is 40%
 * 50           Test # 6 score is 50%
 * 60           Test # 7 score is 60%
 * 70           Test # 8 score is 70%
 * 80           Test # 9 score is 80%
 * 90           Test # 10 score is 90%
 */