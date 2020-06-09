//Aleksander Brown
//alekjbrown@live.com
//june 04,2020

#include <iostream>
using namespace std;

int main()
{
    const string m1 = "Taco";
    const string m2 = "Burrito";
    const string m3 = "Can of Soda";
    const double m1Price = 2.00;
    const double m2Price = 3.00;
    const double m3Price = 1.00;
    int choice;
    int amount;
    string menuChoice;
    double price;
    bool valid = false;

    while (!valid)
    {
        cout << "Choose a menu item:" << endl;
        cout << "1-" << m1 << endl
             << "2-" << m2 << endl
             << "3-" << m3 << endl;
        // cin >> choice;
        if (cin>>choice && choice > 0 && choice < 4)
        {
            valid = true;
        }else
        {
            cin.clear();
            cin.ignore(80,'\n');
            cout << "Invalid choice" << endl;
        }
    }

    switch(choice){
        case 1 :
            menuChoice = m1;
            price = m1Price;
            break;
        case 2 :
            menuChoice = m2;
            price = m2Price;
            break;
        case 3 :
            menuChoice = m3;
            price = m3Price;
            break;
        default : break;
    }

    cout << "How many " << menuChoice << "(s) would you like?" << endl;
    cin >> amount;

    std::cout.precision(2);

    cout << amount << " " << menuChoice << "(s) will cost $"
         << std::fixed << price * amount << endl;

    return 0;
}