//Aleksander Brown
//alekjbrown@live.com
//June 10,2020

/** This program demonstrates working with file storage*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    ofstream outputFile;
    int score;
    int scoreTotal;
    int average;
    int numOfScores = 0;

    //open file
    inputFile.open("scores.txt");

    //if opened process
    if (inputFile)
    {
        //Read numbers from file and tally them
        while (inputFile >> score && score != -999)
        {
            scoreTotal += score;
            numOfScores++;
        }

        //calc averate and output total and average
        average = scoreTotal / numOfScores;
        cout << "Score total is " << scoreTotal << endl;
        cout << "Average score is " << average << endl;

        //close file
        inputFile.close();

        //reopen file
        inputFile.open("scores.txt");

        //if opened process
        if (inputFile)
        {
            //open output file
            outputFile.open("scoresout.txt");

            //if opened process
            if (outputFile)
            {
                //read numbers from file
                while (inputFile >> score && score != -999)
                {
                    outputFile << score + average << endl;
                }
                outputFile << -999 << endl;

                outputFile.close();
            }
            else
            {
                //display error
                cout << "Error opening output file." << endl;
            }

            inputFile.close();
        }
        else
        {
            //display error
            cout << "Error opening the file." << endl;
        }
    }
    else
    {
        //Display error
        cout << "Error opening the file." << endl;
    }

    return 0;
}