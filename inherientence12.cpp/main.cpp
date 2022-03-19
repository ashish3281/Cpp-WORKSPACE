//constructor in multiple inheritance
#include<iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"\n base class constructor called";
    }
};
class base2
{
    public:
    base2()
    {
       cout<<"\n hello base2 class";
    }
};
class derived:public base,public base2
{
public:
    derived()
    {
        cout<<"\n derived class constructor called";
    }
};
int main()
{
    derived obj;
    return 0;
}
