//program on the base class pointer
#include<iostream>
using namespace std;
class base
{
public:
    void show()
    {
        cout<<"\n hello base class";
    }
};
class derived:public base
{
    void show()
    {
        cout<<"\n hello derived class";
    }
};
int main()
{
    base*ptr;
    base obj;
    ptr=&obj;
    ptr->show();
    derived obj1;
    ptr=&obj1;
    ptr->show();
    return 0;
}
