#include <iostream>

using namespace std;
void power(int,int);
int res=1;
int main()
{
    int num,pow;
    cout <<" enter number and power"<< endl;
    cin>>num>>pow;
    power(num,pow);
    cout<<res;
    return 0;
}
void  power(int num,int pow)
{
    if(pow>0)
    {
        res=res*num;
        pow--;
        power(num,pow);
    }
}
