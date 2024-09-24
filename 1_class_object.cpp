#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    int value;

    A(int value)
    {
        this->value = value;
        cout<<"I am construtor"<<endl;
    }

    int Display()
    {
        return value;
    }
    ~A()
    {
        cout<<"I am distructor"<<endl;
    }
};
int main()
{
    A obj(10);
    cout<<obj.Display()<<endl;
    return 0;
}