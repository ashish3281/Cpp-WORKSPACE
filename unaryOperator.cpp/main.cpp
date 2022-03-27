//unary operator overloading using as member function
#include<iostream>
using namespace std;
class point
{
    int x,y,z;
public:
    void get(int a,int b,int c);
    void display();
    void operator -()
    {
        x=-x;
        y=-y;
        z=-z;
    }
};
void point::get(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void point::display()

{
    cout<<"\n cordinate of point are p("<<x<<","<<y<<","<<z<<")";
}
int main()
{
    point p;
    p.get(4,5,-4);
    p.display();
    -p;
    p.display();
}
