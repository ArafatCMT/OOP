#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        void display()
        {
            cout<<"I am Person"<<endl;
        }
};
class Student : public Person
{
    public:
        void display()
        {
            cout<<"I am Student"<<endl;
        }
};
class Teacher : public Person
{
    public:
        void display()
        {
            cout<<"I am Teacher"<<endl;
        }
};

int main()
{
    Teacher t;
    Student s;
    Person p;

    // eikhan e display method ta alada alada object er jonno alada alada kaj koratca etai polyporphism
    p.display(); 
    s.display();
    t.display();

    
    return 0;
}