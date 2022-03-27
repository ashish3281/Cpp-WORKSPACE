#include <iostream>

using namespace std;

void swap(int&a,int&b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int i=5,j=8;
    cout<<" before swapping I="<<i<<"J="<<j<<endl;
    swap(i,j);
    cout<<" after swapping I="<<i<<"J="<<j<<endl;
}
