#include<bits/stdc++.h>
using namespace std;
//parent class
class Vehical
{
    public:
        string brand;

        Vehical(string brand)
        {
            this->brand = brand;
        }

        void VehicalInfo()
        {
            cout<<"Vehical Brand :- "<<brand<<endl;
        }
};
// parent class 
class Engine
{
    public:
        int horsepower;

        Engine(int horsepower)
        {
            this->horsepower = horsepower;
        }

        void EngineInfo()
        {
            cout<<"Engine Horsepower :- "<<horsepower<<endl;
        }
};
//child class , vehical ebong Engine er thake inherit kortaca 
// multiple inheritance ekti class ke ekadhik parent class thake attributes ebong method inherite korta dei
class Car : public Vehical, public Engine
{
    public:
        Car(string brand, int horsepower) : Vehical(brand), Engine(horsepower)
        {

        }
};
int main()
{
    Car car("BMW", 300);
    car.VehicalInfo();
    car.EngineInfo();
    return 0;
}