#include <iostream>

using namespace std;

int main()
{
    int rn[5];
    int i,loc,flag=0,val;
    cout << "enter the roll number" << endl;
    for(i=0;i<5;i++)
    {
        cin>>rn[i];
    }
    cout<<"\n enter the roll number to be searched";
    cin>>val;
    for(i=0;i<5;i++)
    {
        if(rn[i]==val)
        {
            flag=1;
            loc=i;
        }
    }
    if(flag==1)
    {
        cout<<"\n roll number found at location"<<loc+1;//array start from 0 so we take loc+1
    }
    else
        cout<<"\n roll not found";
    return 0;
}
