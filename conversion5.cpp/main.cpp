//class to class conversion
#include<iostream>
using namespace std;
class rupee
{
    double rs;
public:
    rupee(double rs1)
    {
        rs=rs1;
    }
    void show()
    {
        cout<<"money is:"<<rs;
    }
    rupee()
    {
        rs=0;
    }
};
class dollar
{
    double d;
    float dol_val=44.2;
public:
    dollar(double dol1){
    d=dol1;}
    operator rupee()
    {
        double rs1=d*dol_val;
        return (rupee(rs1));
    }
    void show()
    {
        cout<<"money in dollar:"<<d;
    }
};
int main()
{
    dollar d1(3);
    d1.show();
    rupee r1;
    r1=d1;
    r1.show();
    return 0;
}
