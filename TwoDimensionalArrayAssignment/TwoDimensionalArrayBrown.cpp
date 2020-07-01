//Aleksander Brown
//alekjbrown@live.com
//June 17,2020

/** this program demonstrates a two dimensional array */

#include <iostream>
#include <climits>
using namespace std;

//declare and initialize array
const int ROW = 3;
const int COL = 5;
int monkeyFood[ROW][COL] = {};

double average(int (&arr)[ROW][COL]);
int least(int (&arr)[ROW][COL]);
int greatest(int (&arr)[ROW][COL]);

int main()
{
    bool valid = false;

    //fill array with user input
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            //entry validation on prompt
            while (!valid)
            {
                cout << "How many pounds of food did monkey " << i + 1 << " eat on day " << j + 1 << "?" << endl;
                if (cin >> monkeyFood[i][j] && monkeyFood[i][j] > -1)
                {
                    valid = true;
                }
                else
                {
                    cin.clear();
                    cin.ignore(80, '\n');
                    cout << "Entry must be a positive integer." << endl;
                }
            }
            valid = false;
        }
    }

    //set precision
    std::cout.precision(1);

    cout << "On average each monkey consumed " << std::fixed << average(monkeyFood) << " pounds each day." << endl;

    cout << "In a single day this week the least food comsumed by any individual monkey was " << least(monkeyFood) << " pounds." << endl;

    cout << "In a single day this week the most food comsumed by any individual monkey was " << greatest(monkeyFood) << " pounds." << endl;

    return 0;
}

double average(int (&arr)[ROW][COL])
{
    int sum = 0;
    double average = 0;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            sum += arr[i][j];
        }
    }

    average = static_cast<double>(sum / (ROW * COL));

    return average;
}

int least(int (&arr)[ROW][COL])
{
    //start min at max integer so all possibilities are less
    int min = INT_MAX;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            //assign to min if less than current min
            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }

    return min;
}

int greatest(int (&arr)[ROW][COL])
{
        //start max at min integer so all possibilities are greater
    int max = INT_MIN;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            //assign to max if more than current max
            if(arr[i][j] > max)
                max = arr[i][j];
        }
    }

    return max;
}

/*
INPUT: 1,2,3,4,5  1,2,3,4,5  1,2,3,4,6

OUTPUT:
On average each monkey consumed 3.0 pounds each day.
In a single day this week the least food comsumed by any individual monkey was 1 pounds.
In a single day this week the most food comsumed by any individual monkey was 6 pounds.
*/