//unary operator overloading using as friend function
#include<iostream>
using namespace std;
class point
{
    int x,y,z;
    public:
    void get(int a,int b,int c);
    void display();
    friend void operator-(point &);
};
      void operator -(point & p)
    {
       p.x = -p.x;
       p.y = -p.y;
       p.z = -p.z;
    }

void point::get(int a,int b,int c)
{
    x = a;
    y = b;
    z = c;
}
void point::display()

{
    cout<<"\n coordinate of point are p("<<x<<","<<y<<","<<z<<")";
}
int main()
{
    point p1;
    p1.get(-8,5,-4);
    p1.display();
    -p1;
    p1.display();
}
