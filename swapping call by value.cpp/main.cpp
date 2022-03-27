#include <iostream>

using namespace std;

void swap(int ,int);
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"\n value of a before swapping"<<a;
    cout<<"\n value of b before swapping"<<b;
    swap(a,b);
    cout<<"\n value of a after swapping"<<a;
    cout<<"\n value of b after swapping"<<b;
    return 0;
}
void swap(int p,int q)
{
  int  temp;
  temp=p;
  p=q;
  q=temp;
  cout<<"\n value of p after swapping"<<p;
  cout<<"\n value of q after swapping"<<q;
}
