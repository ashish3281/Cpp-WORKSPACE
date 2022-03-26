#include <iostream>

using namespace std;
int reverse(int);
int main()
{
    int n,r;
    cout << "enter number";
    cin>>n;
    r=reverse(n);
    cout<<"reverse of"<<n<<"is"<<r;

}
int reverse(int n)
{
    int r=0,d;
    if(n==0)
    return 0;
    else
        {
            d=n%10;
        n=n/10;
        r=r*10+d;
        reverse(n);
return(n);
        }

}


