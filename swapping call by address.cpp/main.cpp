#include <iostream>

using namespace std;

void swap(int* ,int*);
int main()
{
    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
    cin>>a>>b;
    cout<<"\n value of a before swapping"<<a;
    cout<<"\n value of b before swapping"<<b;
    swap(a,b);
    cout<<"\n value of a after swapping"<<a;
    cout<<"\n value of b after swapping"<<b;
    return 0;
}
void swap(int *x,int *y)
{
  int  temp;
 temp=*x;
  *x=*y;
  *y=temp;
  cout<<"\n value of x after swapping"<<*x;
  cout<<"\n value of y after swapping"<<*y;
}
