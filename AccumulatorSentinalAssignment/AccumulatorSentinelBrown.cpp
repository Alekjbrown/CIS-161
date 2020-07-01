//Aleksander Brown
//alekjbrown@live.com
//June 10,2020

/** This program demonstrates accumulator variables and Sentinal values */

/**  [Psuedocode]
 variable for
    average
    total points
    possible total points
    counter and number of assignments

prompt user for number of assignments
read user input for number of assignments
while ( more assignments to input ) {
   get user score on assignment
   add to total points
   get possible score on assignment
   add to possible total points counter++;
}
calculate average or grade
print out average or grade with 2 decimal points
*/

#include <iostream>
using namespace std;

int main()
{
    double average;
    double totalPoints;
    double score;
    int pointPossible;
    int totalPossible;
    int counter = 0;
    int numOfAssignments;
    bool valid = false;

    while (!valid)
    {
        //prompt and read in number of assignments
        cout << "How many assignments will you input?" << endl;
        //validate input
        if (cin >> numOfAssignments && numOfAssignments > 0)
        {
            valid = true;
        }
        else
        {
            cin.clear();
            cin.ignore(80, '\n');
            cout << "Invalid number of assignments";
        }
    }
    valid = false;

    while (counter < numOfAssignments)
    {
        //prompt, validate, and store score on assignment
        while (!valid)
        {
            cout << "Enter score for assignment #" << counter + 1 << endl;
            if (cin >> score && score > -1)
            {
                valid = true;
            }
            else
            {
                cin.clear();
                cin.ignore(80, '\n');
                cout << "Invalid score" << endl;
            }
        }
        valid = false;

        totalPoints += score;

        //prompt, validate, and store possible points on assignment
        while (!valid)
        {
            cout << "How many points were possible on this assignment?" << endl;
            if (cin >> pointPossible && pointPossible > -1)
            {
                valid = true;
            }
            else
            {
                cin.clear();
                cin.ignore(80, '\n');
                cout << "Invalid point amount entered." << endl;
            }
        }
        valid = false;

        totalPossible += pointPossible;
        counter++;
    }

    //calculate average and grade
    average = totalPoints / numOfAssignments;
    score = totalPoints / totalPossible;

    std::cout.precision(2);
    cout << "Your average score is " << std::fixed << average << endl;
    cout << "Your grade is " << std::fixed << score * 100 << "%" << endl;

    return 0;
}