#include <iostream>

using namespace std;

int main()
{
    int a[5]={2,3,4,5,6};
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}
