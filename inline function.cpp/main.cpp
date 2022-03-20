#include <iostream>

using namespace std;

int square(int);
int main()
{
    int num;
    cout<<"\n enter the value";
    cin>>num;
    int res;
    res=square(num);
    cout<<"\n square of number is:"<<res;
    return 0;
}
inline int square(int p)
{
    return p*p;
}
