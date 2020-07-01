//Aleksander Brown
//alekjbrown@live.com
//June 24, 2020

/**This program for cis-161 midterm
 * takes in 10 test scores
 * demonstrates validation, and decides how to acculate total
 * then demonstrates decision to choose a print statement
 *
 */

#include <iostream>
using namespace std;

//prototypes

void ten();
void five();
int average();

//globals
int total = 0;
const int NUM_OF_TESTS = 10;

int main()
{
    bool valid = false; //validation bool
    int avg = 0; //hold average after function
    int test = 0; //hold user input for test scores
    const int WARRIOR = 100; //limit to print warrior
    const int GOOD = 6;  //limit to print good

    for (int i = 0; i < NUM_OF_TESTS; i++)
    {
        //input and validate test scores
        while (!valid)
        {
            cout << "Enter a test score between 0 and 10 for test number " << i + 1 << ":" << endl;
            if (cin >> test && test > -1 && test < 11)
            {
                valid = true;
            }
            else
            {
                cin.clear();
                cin.ignore(1024, '\n');
                cout << "Invalid entry, please use integers between 0 and 10." << endl;
            }
        }
        valid = false;

        //if 10 call ten, if 5 call five, else add to total
        switch (test)
        {
        case 10:
            ten();
            break;
        case 5:
            five();
            break;
        default:
            total += test;
            break;
        }
    }

    avg = average();

    //check scores against limits to determine if output should include either statement
    if(total > WARRIOR)
    {
        cout << "Test Warrior" << endl;
    }
    else if(avg > GOOD)
    {
        cout << "Good Job" << endl;
    }
    else
    {
    }

    //output for all results
    cout << "Your average score is " << avg << endl;
    cout << "Your total score for all tests is " << total << endl;


    return 0;
}

//called if input is 10, adds ten then doubles whole total
void ten()
{
    total += 10;
    total *= 2;
}

//called if input is 5, adds five then halves whole total
void five()
{
    total += 5;
    total /= 2;
}

//provides sudo average based on num of tests and returns int
int average()
{
    int average = total / NUM_OF_TESTS;
    return average;
}

/**
 * input                                output
 * 10,10,10,10,10,10,10,10,10,10        "test warrior"
 *                                      "avg 2046"
 *                                      "total 20460"
 *
 * 5,5,5,5,5,5,5,5,5,5                  "avg score 0"
 *                                      "total score 4"
 *
 */
