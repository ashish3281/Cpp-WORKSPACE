//same name of base class and derived class that condition is class ambiguity
#include<iostream>
using namespace std;
class base
{
public:
    void show()
    {
        cout<<"hello base class \n";
    }
};
class derived : public base
{
public:
    void show()
    {
        cout<<"\n hello derived class";
    }
};
int main()
{
    derived obj;
    obj.show();
    obj.base::show();
    return 0;
}
