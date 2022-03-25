#include <iostream>

using namespace std;

class circle
{
    int radius;
    float pi;
public:
    void enter(int a,float p)
    {
        radius=a;
        pi=p;
    }
    void circum()
    {
        cout<<"\n circumference of circle is"<< 2*pi*radius;
    }
};
int main()
{
    circle c1;
    c1.enter(5,3.142);
    c1.circum();
    return 0;
}
