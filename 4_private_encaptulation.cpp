#include<bits/stdc++.h>
using namespace std;

class Person
{
    private:
        int balance;

    public:
        string name;
        int age;

        Person(string name, int age)
        {
            this->name = name;
            this->age = age;
            this->balance = 0;
        }
        // public method diye balance ta access korta ci 
        int getBalance()
        {
            return balance;
        }
        // public method diye balance ta set ba update korta ci 
        void setBalance(int amount)
        {
            balance += amount;
            cout<<"amount added with balance successfully"<<endl;
        }


};
int main()
{
    Person rahim("rahim", 25);
    cout<<rahim.name<<" "<<rahim.age<<endl;
    cout<<rahim.getBalance()<<endl;
    rahim.setBalance(500);
    cout<<rahim.getBalance()<<endl;
    return 0;
}