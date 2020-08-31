//Aleksander Brown
//alekjbrown@live.com
//July 7,2020

#include "engine.h"

//Constructors
Engine::Engine()
{
    cylinders = 4;
    hp = 150;
    iType = NACARB;
}
Engine::Engine(int engineType, int cyl, int power)
{
    cylinders = cyl;
    iType = type(engineType);
    hp = power;
}

//mutators
void Engine::setCylinders(int c)
{
    cylinders = c;
}

void Engine::setHp(int h)
{
    hp = h;
}

void Engine::setIType(int i)
{
    iType = type(i);
}

//Accessors
int Engine::getCylinders()
{
    return cylinders;
}

int Engine::getHp()
{
    return hp;
}

Engine::type Engine::getType()
{
    return type(iType);
}

//functions
double Engine::Convert()
{
    return getMinInjectorSize() * 10.2;
}

double Engine::getMinInjectorSize()
{
    return getMinPumpSize() / cylinders;
}

double Engine::getMinPumpSize()
{
    return hp * BSFC[iType];
}

string Engine::Print()
{
    string out = "";
    out.append("Cylinders = " + to_string(cylinders) + "\nHorsepower = " + to_string(hp) +
        "\nEngine Type = " + to_string(type(iType)) + "\nMinimum Fuel Pump Size = " + to_string(getMinPumpSize()) +
        "\nMinimum Injector Size = " + to_string(getMinInjectorSize()) + " or " + to_string(Convert()) +
        "\n");
    return out;

}