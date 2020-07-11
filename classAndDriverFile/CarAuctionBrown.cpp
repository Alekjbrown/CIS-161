//Aleksander Brown
//alekjbrown@live.com
//July 1, 2020

#include <iostream>
#include <string>
using namespace std;

//car class
class Car
{
private:
    //members
    string id;    //member id
    int sold;     //sold item
    int bluebook; //value
public:
    //functions
    Car()
    {
        id = "House";
        sold = 0;
        bluebook = 0;
    }
    void setId(string);      //mutator for Id
    void setSold(int);       //mutator for Sold
    void setBluebook(int);   //mutator for Bluebook
    string getId() const;    //accessor for id
    int getSold() const;     //accessor for sold
    int getBluebook() const; //accessor for bluebook
    int getProfit();         //function to calculate profit
    void display();          //function to display objects
};

int main()
{
    //instantiate first car and set member values
    Car carA;
    carA.setId("Ford");
    carA.setSold(12500);
    carA.setBluebook(10000);

    carA.display();

    //instantiate second car and set member values
    Car carB;
    carB.setId("Kia");
    carB.setSold(5000);
    carB.setBluebook(1000);

    carB.display();

    //instantiate third car using default constructor
    Car carC;

    carC.display();

    return 0;
}

void Car::setId(string id) { this->id = id; }                   //mutator for id
void Car::setSold(int sold) { this->sold = sold; }              //mutator for sold
void Car::setBluebook(int bluebook) { this->bluebook = sold; }  //mutator for bluebook
string Car::getId() const { return id; }                        //accessor for id
int Car::getSold() const { return sold; }                       //accessor for sold
int Car::getBluebook() const { return bluebook; }               //accessor for bluebook
int Car::getProfit()                                            //function for profit calculation
{
    return (getSold() - getBluebook());
}
//function to display object
void Car::display()
{
    cout << "ID: " << getId() << endl;
    cout << "Sold: " << getSold() << endl;
    cout << "Bluebook: " << getBluebook() << endl;
    cout << "Profit: " << getProfit() << endl;
    cout << endl;
}