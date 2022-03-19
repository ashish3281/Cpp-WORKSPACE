//constructor in single inheritance
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
class derived:public base
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
