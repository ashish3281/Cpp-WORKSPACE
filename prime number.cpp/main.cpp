#include <iostream>

using namespace std;

int main()
{
int i,num,flag=0;
cout<<"\n enter the number";
cin>>num;
for(i=2;i<num;i++)
{
    if (num%i==0)
    {
        flag=1;
        break;
    }

}
if(flag==0)
    cout<<"\n Prime number";
else
    cout<<"\n composite number";
return 0;
}
