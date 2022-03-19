#include <iostream>

using namespace std;

class demo
{
    int a,b;
public:
    void input()
    {
        cin>>a>>b;
    }
    friend void add(demo&d1);
};
void add(demo&d1)
{
   cout<<"\n sum  is:"<< d1.a+d1.b;
}
int main()
{
    demo d;
    d.input();
    add(d);
}

