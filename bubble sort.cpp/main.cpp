#include <iostream>

using namespace std;

int main()
{
    int a[5],i,j,temp;
    cout << "enter the elements" << endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
        if(a[i]>a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    cout<<"\n sorted elements are";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
