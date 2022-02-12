#include <iostream>

using namespace std;

void square(int);
int main()
{
    int num;
    cout<<"\n enter the number ";
    cin>>num;
    square (num);
    cout<<"\n square of original value"<<num;
}
//cout<<"\n square of value "<<p;
void square(int p)
{
   p= p*p;
   cout<<"\n value is "<<p;
}
