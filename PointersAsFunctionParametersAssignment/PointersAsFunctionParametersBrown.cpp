//Aleksander Brown
//alekjbrown@live.com
//June 18,2020

#include <iostream>
#include <iomanip>
using namespace std;

void sort(int arr[], int size);
int binarySearch(int arr[], int item, int low, int high);
double average(int arr[], int* size);

int main()
{
    int *scores = nullptr, //dynamically allocate array
        numOfScores = 0,   //user input number of scores
        score = 0;         //user input score
    bool valid = false;

    //input and validate number of scores to take in
    while (!valid)
    {
        cout << "How many test scores would you like to enter?" << endl;
        if (cin >> numOfScores && numOfScores > -1)
        {
            valid = true;
        }
        else
        {
            cin.clear();
            cin.ignore(1024, '\n');
            cout << "Invalid Entry, enter a positive integer" << endl;
        }
    }
    valid = false;

    scores = new int[numOfScores];

    //input and validate scored into array
    for (int i = 0; i < numOfScores; i++)
    {
        while(!valid)
        {
            cout << "Enter score number " << i << endl;
            if(cin >> scores[i] && scores[i] > -1)
            {
                valid = true;
            }else
            {
                cin.clear();
                cin.ignore(1024,'\n');
                cout << "Invalid Entry, enter positive integers only" << endl;
            }
        }
        valid = false;
    }

    //call insertion sort
    sort(scores,numOfScores);

    cout << "Scores entered: " << endl;
    for(int i = 0; i < numOfScores; i++)
    {
        cout << scores[i] << " | ";
    }
    cout << endl;
    cout << "Average Score: "<< fixed << setprecision(2) << average(scores, &numOfScores) << endl;

    return 0;
}

void sort(int arr[], int size)
{
        int location;
        int j;
        int k;
        int selected;

    for (int i = 1; i < size; ++i)
    {
        j = i - 1;
        selected = arr[i];

        // find location where selected sould be inseretd
        location = binarySearch(arr, selected, 0, j);

        // Move all elements after location to create space
        while (j >= location)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = selected;
    }
}

int binarySearch(int arr[], int item, int low, int high)
{
    if (high <= low)
        return (item > arr[low])?  (low + 1): low;

    int mid = (low + high)/2;

    if(item == arr[mid])
        return mid+1;

    if(item > arr[mid])
        return binarySearch(arr, item, mid+1, high);
    return binarySearch(arr, item, low, mid-1);
}

double average(int arr[], int* size)
{
    double average = 0;
    int sum = 0;

    for (int i = 0; i < *size; i++)
    {
        sum += arr[i];
    }

    average = sum / *size;
    return average;
}