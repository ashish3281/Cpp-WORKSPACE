#include <iostream>

using namespace std;

void area(int,int);
void area(int);
void area(float);
int main()
{
    int len,br;
    float radius;
    int side;
    cout<<"\n enter the valid dimension ";
        cin>>len>>br;
        area(len,br);
        cout<<"\n enter the radius";
        cin>>radius;
        area(radius);
        cout<<"\n enter the side";
        cin>>side;
        area(side);
        return 0;
}
void area(int l,int b) //area of rectangle
{
    cout<<"\n area of rectangle is"<<l*b;
}
void area(int s)
{
    cout<<"\n area of square is"<<s*s;
}
void area(float r)
{
    cout<<"\n area of circle is:"<<3.14*r*r;
}
