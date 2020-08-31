#ifndef ENGINE_H
#define ENGINE_H
//Aleksander Brown
//alekjbrown@live.com
//July 7,2020

#include <string>
using namespace std;

class Engine
{
    private:
        int cylinders;      //num of cylinder
        int hp;             //base horsepower
        enum type{NACARB,NAFI,FICARB,FIFI};     //enum of engine types
        type iType;                             //User selected engine type
        const double BSFC[4] = {0.51,0.475,0.61,0.575};     //array of possible BSFC values accessed by enum order



    public:
        //Constructors
        Engine();
        Engine(int engineType, int cyl, int power);
        //mutators
        void setCylinders(int c);
        void setHp(int h);
        void setIType(int i);
        //Accessors
        int getCylinders();
        int getHp();
        type getType();
        //functions
        double Convert();
        double getMinInjectorSize();
        double getMinPumpSize();
        string Print();
};


#endif // !ENGINE_H