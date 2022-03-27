#include <iostream>

using namespace std;

int main()
{
    int i,sum=0;
    for(i=1;i<=50;i++)
    {
        if(i%2!=0)

    {
        sum=sum+i;
    }
    }
    cout << "sum is " <<  sum<<endl;

    return 0;
}
