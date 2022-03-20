#include <iostream>

using namespace std;

class airthmatic
{
    int x,y;
public:
    int add(int a,int b);
    int sub(int p,int q);
    int multiply(int m,int n);
};
inline int airthmatic::add(int a,int b)
{
    x=a;
    y=b;
    return x+y;
}
inline int airthmatic::sub(int p,int q)
{
    x=p;
    y=q;
    return x-y;
}
inline int airthmatic::multiply(int m,int n)
{
    x=m;
    y=n;
    return x*y;
}
int main()
{
    airthmatic a1;
    int res,res1,res2;

    res=a1.add(10,20);
    cout<<"\n add result is "<<res;
    res1=a1.sub(40,20);
    cout<<"\n sub result is "<<res1;
    res2=a1.multiply(5,2);
    cout<<"\n multiply result is "<<res2;
    return 0;

}
