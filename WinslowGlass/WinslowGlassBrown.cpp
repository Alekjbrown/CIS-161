//Aleksander Brown
//alekjbrown@live.com
//june 04, 2020

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double unitPrice = 24;
    //tiers set to lowest number of next tier for less than operators
    const int tier1 = 11;
    const int tier2 = 16;
    const int tier3 = 21;
    const int tier4 = 31;
    const double t1Discount = 0;
    const double t2Discount = .1;
    const double t3Discount = .2;
    const double t4Discount = .3;
    const double t5Discount = .35;

    int bottleNum;
    double basePrice;
    int disPercent;
    double discount;
    double total;
    bool valid = false;

    while(!valid)
    {
    cout << "How many bottles would you like to by? You may enter between 0 and 399." << endl;
        if(cin >> bottleNum && bottleNum >-1 && bottleNum < 400)
        {
            valid = true;
        }else
        {
            cin.clear();
            cin.ignore(80,'\n');
            cout << "Invalid input" << endl;
        }
    }

    basePrice = static_cast<double>(bottleNum * unitPrice);

    if (bottleNum < tier1)
    {
        discount = basePrice * t1Discount;
        disPercent = t1Discount * 100;
    }
    else if (bottleNum < tier2)
    {
        discount = basePrice * t2Discount;
        disPercent = t2Discount * 100;
    }
    else if (bottleNum < tier3)
    {
        discount = basePrice * t3Discount;
        disPercent = t3Discount * 100;
    }
    else if (bottleNum < tier4)
    {
        discount = basePrice * t4Discount;
        disPercent = t4Discount * 100;
    }
    else
    {
        discount = basePrice * t5Discount;
        disPercent = t5Discount * 100;
    }

    total = basePrice - discount;

    std::cout.precision(2);

    cout << "The price of " << bottleNum << " bottles is $" << std::fixed << basePrice << endl;
    cout << "You get a discount rate of " << fixed << setprecision(0) << disPercent << "%" << endl;
    std::cout.precision(2);
    cout << "Your discount is $" << std::fixed << discount << endl;
    cout << "Your total is $" << std::fixed << total << endl;

    return 0;
}