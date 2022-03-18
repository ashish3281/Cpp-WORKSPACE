
#include <iostream>

using namespace std;

int main()
{
    int a[100],i,k,n;
    cout << "how many number to store in array" << endl;
    cin>>n;
    cout<<"enter the number";
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    cout<<"enter the  position";
    cin>>k;
    k=k-1;
    for(i=k;i<n;i++)
    {
        a[i]=a[i+1];
    }
    cout<<"contents of the array\n";
    for(i=0;i<n-1;i++)
    {
        cout<<a[i];
    }
    return 0;
}
