//Aleksander Brown
//alekjbrown@live.com
//June 18,2020

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    char feedGrade;

    cin >> feedGrade;

  switch(feedGrade)

   {
      case 'a':
      case 'A': cout << "30 cents per pound.\n";
                break;
      case 'b':
      case 'B': cout << "20 cents per pound.\n";
                break;
      case 'c':
      case 'C': cout << "15 cents per pound.\n";
      default:  cout << "That is an invalid choice.\n";
   }

return 0;

}