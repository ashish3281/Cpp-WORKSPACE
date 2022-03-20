#include <iostream>

using namespace std;

int main()
{
    int a[100],i,k,n,item;
    cout << "how many number to store in array" << endl;
    cin>>n;
    cout<<"enter the number";
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    cout<<"enter the number and position";
    cin>>item>>k;
    k=k-1;
    for(i=n-1;i>=k;i--)
    {
        a[i+1]=a[i];
    }
    a[k]=item;
    cout<<"contents of the array\n";
    for(i=0;i<=n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
