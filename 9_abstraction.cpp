#include<bits/stdc++.h>
using namespace std;
class User
{
    public:
        string name;
        string email;
        int age;

        User(string name, string email, int age)
        {
            this->name = name;
            this->email = email;
            this->age = age;
        }
        //pure virtual function er kono body thake na ty eke abstract method bola hoi
        virtual void DisplayData() = 0;
};
class Person : public User
{
    public:
        Person(string name, string email, int age) : User(name, email, age)
        {

        }
        // abstract method ke override kortaca DisplayData()
        void DisplayData()
        {
            cout<<name<<" "<<email<<" "<<age<<endl;
        }
};
int main()
{
    Person obj("rahim", "rahim@gmail.com", 25);
    obj.DisplayData();

    return 0;
}