//Aleksander brown
//alekjbrown@live.com
//July 14, 2020

//function definitions for TestScores

#include "TestScores.h"

//constructor
TestScores::TestScores(int arr[])
{
    scores = arr;
}

//destructor
TestScores::~TestScores()
{
}

//function for average
double TestScores::avg()
{
    int total = 0;
    const std::size_t lengthArr = sizeof(scores) - sizeof(int);
    for (int i = 0; i < lengthArr; i++)
    {
        if (scores[i] < 0 || scores[i] > 100)
        {
            //exception
            throw "Number was not between 0 and 100";
        }
        else
        {
            total += scores[i];
        }
    }

    return total / lengthArr;
}