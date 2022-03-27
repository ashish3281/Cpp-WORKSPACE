// pre decrement unary operator overloading using as member function
#include<iostream>
using namespace std;
class point
{
    int x,y;
public:
    void get(int a,int b);
    void display();
    void operator --();
};
void point::operator--()
    {
        x=x-1;
        y=y-1;
    }

void point::get(int a,int b)
{
    x=a;
    y=b;
}
void point::display()

{
    cout<<x<<endl;
    cout<<y<<endl;
}
int main()
{
    point p;
    p.get(4,5);
    p.display();
    --p;
    p.display();
    return 0;
}
