#include<bits/stdc++.h>
using namespace std;
//base class : jar thake boisistio inherit kora hoi take base class bole.
class Person
{
    public:
        string name;
        int age;
        string religion;
        string gender;
        string address;
        string department;

        Person(string name, int age, string religion, string gender, string address, string department)
        {
            this->name = name;
            this->age = age;
            this->religion = religion;
            this->gender = gender;
            this->address = address;
            this->department = department;
        }
};
//derive class: je boisisto inherit kore take derive class bole
class Student : public Person
{
    public:
        string cls;
        int roll;

        Student(string name, int age, string religion, string gender, string address, string cls, string department, int roll) : Person(name,age, religion, gender, address, department)
        {
            
            this->cls = cls;
            this->roll = roll;
        }
};
//derive class: je boisisto inherit kore take derive class bole
class Teacher : public Person
{
    private:
        int salary = 0;
    public:
        string subject;

        Teacher(string name, int age, string religion, string gender, string address, string department, string subject) : Person(name, age, religion, gender, address, department)
        {
            this->subject = subject;
        }

        int getSalary()
        {
            return salary;
        }
        void setSalary(int amount)
        {
            salary += amount;
        }
};
int main()
{
    Student student("rahim", 20, "islam", "male", "dhaka", "nine", "Science", 5);
    cout<<student.name<<" "<<student.age<<" "<<student.religion<<" "<<student.gender<<" "<<student.address<<" "<<student.cls<<" "<<student.department<<" "<<student.roll<<endl;

    Teacher teacher("Abdul Alim", 45, "islam", "male", "rajshahi", "Science", "Biology");
    cout<<teacher.name<<" "<<teacher.age<<" "<<teacher.gender<<" "<<teacher.religion<<" "<<teacher.address<<" "<<teacher.department<<" "<<teacher.subject<<endl;

    cout<<teacher.getSalary()<<endl;
    teacher.setSalary(500);
    cout<<teacher.getSalary()<<endl;
    return 0;
}