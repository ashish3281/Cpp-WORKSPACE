//hybrid inheritance
#include<iostream>
using namespace std;
class x
{
public:
    void showx()
    {
        cout<<"\n hello x class";
    }
};
class y:virtual public x
{
public:
    void showy(){

    cout<<"\n hello y class";
    }
};
class z:public virtual x
{
public:
    void showz()
    {
        cout<<"\n hello z class";
    }
};
class w:public y,public z
{
public:
     void showw()
     {
         cout<<"\n hello w class";
     }
};
int main()
{
    w  obj;
    obj.showx();
    obj.showy();
    obj.showz();
    obj.showw();
    return 0;
}
