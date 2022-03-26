#include<iostream>
using namespace std;
class base
{
public:
    int b;
    void virtual show()
    {
        cout<<"\n base class;";
        cout<<b;
    }
};
    class derived:public base
    {
    public:
        int d;
        void show()
        {
            cout<<"\n derived class";
            cout<<b<<endl;
            cout<<d;
        }
    };

int main()
{
    base*bptr;
    base b1;
    bptr = &b1;
    bptr->b=100;
    bptr->show();
    derived d1;
    bptr=&d1;
    bptr->b=250;
    d1.d=200;
    bptr->show();
    return 0;
}
