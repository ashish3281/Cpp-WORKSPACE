//polymorphism using abstract base class
#include <iostream>

using namespace std;
class fruits//abstract class
{
public:
    virtual void taste()=0;//pure virtual class
    void show()
    {
        cout<<"\n ist a fruits ";
    }
};
class mango:public fruits
{
    void taste()
    {
        cout<<"\n mango is sweet ";
    }
};
class orange:public fruits
{
    void taste()
    {
        cout<<"\n orange is sour";
    }
};
int main()
{
    fruits*ptr;
    mango m1;
    orange o1;
    m1.show();
    ptr=&m1;
    ptr->taste();
    ptr=&o1;
    ptr->taste();
    return 0;
}
