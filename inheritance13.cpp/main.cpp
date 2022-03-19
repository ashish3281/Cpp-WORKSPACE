//multiple inheritance in parametrised constructor
#include <iostream>

using namespace std;
class alpha
{
    int x;
public:
    alpha(int i)
    {
        x=i;
        cout<<"\n alpha initialized";
    }
    void showx(void)
    {
        cout<<"x="<<x;
    }
};
class beta
{
    int y;
public:
    beta(int j)
    {
        y=j;
        cout<<"\n beta initialized";
    }
    void showy(void)
    {
        cout<<"y="<<y;
    }
};
class gamma:public beta,public alpha
{
    int m,n;
public:
    gamma(int a,int b,int c,int d):alpha(a),beta(b)
    {
        m=c;
        n=d;
        cout<<"\n gamma initialized";
    }
    void showz(void)
    {
        cout<<"m="<<m;
        cout<<"n="<<n;
    }
};
int main()
{
    gamma g(1,2,3,4,5,6);

    g.showx();
    g.showy();
    g.showz();
    return 0;
}
