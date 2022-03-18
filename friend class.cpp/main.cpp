#include <iostream>

using namespace std;

class base
{
    int a;
public:
    void input()
    {
        a=45;
    }
    friend class friendclass;
};
class friendclass
{
    int b;
public:
    void input1()
    {
        b=50;
    }
    void add(base obj)
    {
        cout<<obj.a+b;
    }
};
int main()
{
    base t1;
    t1.input();
    friendclass t2;
    t2.input1();
    t2.add(t1);
    return 0;
}
