#include <iostream>

using namespace std;

int main()
{
    int ar[100],beg,mid,end,i,n,search;
    cout << "how many number in the array:" << endl;
    cin>>n;
    cout<<"enter"<<n<<"numbers in asscending order-->";
    for(i=0;i<n;i++)
        cin>>ar[i];
    beg=0;end=n-1;
    cout<<"enter a number to search:";
    cin>>search;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(ar[mid]==search)
            cout<<"\n item found at position"<<(mid+1);
            if(search>ar[mid])
            beg=mid+1;
        else
            end==mid-1;
    }
    cout<<"\n sorry!"<<search<<"does not found";
    return 0;
}
