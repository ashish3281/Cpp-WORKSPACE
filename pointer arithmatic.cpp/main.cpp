#include <iostream>

using namespace std;

int main()
{
    int a=10,b=20;
    int *p,*q;
    p=&a;
    q=&b;
    cout<<"\n value of a="<<a;
    cout << "\n value of b=" <<b;
    cout<<"\n value of p="<<p;
    cout<<"memory address of a="<<&a;
    cout<<"\n value of q="<<q;
    cout<<"\n memory address of b="<<&b;
    p=p+1;
    cout<<"\n after adding 1 value of p="<<p;//memory takes 4 bits
    p=p-2;
    cout<<"\n value of p after subtract="<<p;
    q=p;
    cout<<"\n value of p and q is"<<p,q;
    p++;
    cout<<" \n value of p after post increment \n"<<p;
    --q;
    cout<<"\n value of q after pre decrement\n"<<q;
    cout<<"\n two pointer are subtract from each other"<<p-q;
    return 0;
}
