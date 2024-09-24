#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;

        Person(string name, int age)
        {
            this->name = name;
            this->age = age;
        }

        void myData()
        {
            cout<<name<<" "<<age<<endl;
        }
};
int main()
{
    Person rahim("Rahim", 25);
    cout<<rahim.name<<" "<<rahim.age<<endl;
    rahim.myData();
    return 0;
}