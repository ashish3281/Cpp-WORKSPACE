//multiple abmiguity
//ambiguity in multilevel inheritance
#include<iostream>
using namespace std;
class base
{
public:
    void show()
    {
        cout<<" \n hello base class \n";
    }
};
class base2
{
public:
    void show()
    {
        cout<<"\n hello base 2 class";
    }
};
class derived:public base,public base2
{
public:
    void show()
    {
        cout<<"\n derived class class ";
    }
};
int main()
{
    derived obj;
    obj.show();
    obj.base::show();
    obj.base2::show();
    return 0;
}
