// logical not unary operator overloading using as friend function
#include<iostream>
using namespace std;
class point
{
    int x;
public:
    void get(int a){x=a;}
    void display(void){cout<<x<<endl;}
    void operator !(void){x=!x;}
    void friend operator -(point y);
};
void operator -(point y){
    y.x=!y.x;
}
int main()
{
    point p;
    p.get(10);
    cout<<"\n before overloading";
    p.display();
    cout<<endl;
    cout<<" \n after overloading";
    !p;
    p.display();
    cout<<endl;
    return 0;
}
