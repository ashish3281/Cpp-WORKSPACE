#include <iostream>

using namespace std;

class converet
{
    private:
    int meter,km;
public:
    void input()
    {
        cout<<"\n enter the values";
        cin>>km>>meter;
    }
    friend void demo(converet obj);
};
void demo(converet obj)
{
   cout<<"\n distance in meter is:"<< obj.km*1000+obj.meter;
}
int main()
{
    converet d;
    d.input();
    demo(d);
}
