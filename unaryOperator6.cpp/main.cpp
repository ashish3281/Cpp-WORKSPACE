// logical not unary operator overloading using as member function
#include<iostream>
using namespace std;
class point
{
    int x;
public:
    void get(int a){x=a;}
    void display(){cout<<x<<endl;}
    void operator !(){x=!x;}
};

int main()
{
    point p;
    p.get(0);
    p.display();
    !p;
    p.display();
    return 0;
}
