#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
        void displayA()
        {
            cout<<"Capital letter A"<<endl;
        }
};
class B: public A // class B class A er thake inherit kortaca mane class B er modddhe A er sob property ase
{
    public:
        void displayB()
        {
            cout<<"Capital letter B"<<endl;
        }
};
class C: public B // class C class B er thake inherit kortaca mane class C er modddhe B er sob property ase. ak kotahi class C er moddhe class A ebong class B ei 2 ta class er property ei ase
{
    public:
        void displayC()
        {
            cout<<"Capital letter C"<<endl;
        }
};
int main()
{
    C obj;
    obj.displayA();
    obj.displayB();
    obj.displayC();
    return 0;
}