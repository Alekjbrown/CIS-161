#ifndef TESTSCORES_H
#define TESTSCORES_H
//Aleksander brown
//alekjbrown@live.com
//July 14, 2020

//Header file for TestScores

#include <string>
using namespace std;

class TestScores
{
    private:
    int* scores = nullptr;  //scores array
    public:
    TestScores(int arr[]);  //constructor
    ~TestScores();          //destructor
    double avg();           //average function
};

#endif // !TESTSCORES_H
