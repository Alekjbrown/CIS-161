//Aleksander Brown
//alekjbrown@live.com
//July 7, 2020

#include <iostream>
#include "engine.cpp"
using namespace std;

struct Eng
{
    int cyl;
    int inductionType;
    int power;
    double injectorSize;
    double pumpSize;
};

void invalid();

int main()
{
    bool valid = false;
    Engine engine1 = Engine();
    Eng eng1 = {};

    cout << "Fuel Injection Conversion Size Calculator" << endl;
    while (!valid)
    {
        cout << "What type of engine do you have?" << endl
             << "1. Naturally Asperated Carbureted" << endl
             << "2. Naturally Asperated Fuel Injected" << endl
             << "3. Forced Induction Carbureted" << endl
             << "4. Forced Induction Fuel Injected" << endl;
        if (cin >> eng1.inductionType && eng1.inductionType > 0 && eng1.inductionType < 5)
        {
            valid = true;
            switch (eng1.inductionType - 1)
            {
            case 0:
                engine1.setIType(0);
                break;
            case 1:
                engine1.setIType(1);
                break;
            case 2:
                engine1.setIType(2);
                break;
            case 3:
                engine1.setIType(3);
                break;
            default:
                break;
            }
        }
        else
        {
            invalid();
            cout << "enter a selection from the menu" << endl;
        }
    }
    valid = false;

    while (!valid)
    {
        cout << "What is the base HP of your engine?" << endl;
        if (cin >> eng1.power && eng1.power > 0)
        {
            valid = true;
            engine1.setHp(eng1.power);
        }
        else
        {
            invalid();
            cout << "enter a positive number" << endl;
        }
    }
    valid = false;

    while(!valid)
    {
        cout << "How many cylinders does your engine have?" << endl;
        if(cin >> eng1.cyl && eng1.cyl > 0 && eng1.cyl < 16)
        {
            valid = true;
            engine1.setCylinders(eng1.cyl);
        }
        else
        {
            invalid();
            cout << "enter a valid number of cylinders" << endl;
        }
    }
    valid = false;

    eng1.pumpSize = engine1.getMinPumpSize();
    eng1.injectorSize = engine1.getMinInjectorSize();

    cout << "Your engine requires a minimum fuel pump size of: " << eng1.pumpSize << " lb/hr"
    << endl << "and minimum fuel injector rating of " << eng1.injectorSize << " lb/hr or " << engine1.Convert() << " cc/min" << endl << endl;

    return 0;
}

void invalid()
{
    cin.clear();
    cin.ignore(1024, '\n');
    cout << "Invalid entry, ";
}