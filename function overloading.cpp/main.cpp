#include <iostream>

using namespace std;

void add(int,int);
void add(int ,int,int);
int main()
{
    int p,q;
    cout<<"\n enter the value:";
    cin>>p>>q;
    add(p,q); add(5,6); add(5,6,7);
    return 0;
}
void add(int a,int b)
{
    cout<<"\n result of addition is:"<<a+b;
}
void add(int m,int n,int o)
{
    cout<<"\n  result of addition is:"<<m+n+o;
}
