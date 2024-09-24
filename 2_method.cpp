#include<bits/stdc++.h>
using namespace std;

class car
{
    public:
    string model;
    string color;

    car(string model, string color)
    {
        this->model = model;
        this->color = color;
    }
    void carInfo()
    {
        cout<<model<<" "<<color<<endl;
    }
};
int main()
{
    car myCar("Toyota", "Red");
    myCar.carInfo();
    return 0;
}