#include <iostream>

using namespace std;

class circle
{
public:
    float radius;
    float pi;
public:
    void input()
    {
        cout<<"/n enter the radius";
        cin>>radius;
        cout<<"/n enter pi value";
        cin>>pi;
    }
    void area();
    void circum();
};
void circle::area ()
{
    float ar;
    ar=pi*radius*radius;
    cout<<"/n area of circle is"<<ar;
}
void circle::circum()
{
    float cir;
    cir=2*pi*radius;
    cout<<"/n circumference is"<<cir;
}
int main()
{
    circle c1;
    c1.input();
    c1.area();
    c1.circum();
    return 0;
}
