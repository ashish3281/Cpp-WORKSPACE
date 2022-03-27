#include <iostream>

using namespace std;
int getsum(int n)
{
    static int sum=0;
    if(n>0)
    {
        sum =sum+n%10;
        getsum(n/10);
    }
    return sum;
}
int main()
{
    int n,sum;
    cout<<"entre the value of n:";
    cin>>n;
    sum=getsum(n);
    cout<<sum;
    return 0;
}
