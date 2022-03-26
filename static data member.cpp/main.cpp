#include <iostream>

using namespace std;

class item
{
    static int count;
    int number;
public:
    void getdata(int a)
    {
        number=a;
        count++;
    }
    void getcount(void)
    {
        cout<<count;
    }
};
int item::count; //definition of static data member
int main()
{
    item a,b,c;
    a.getcount();
    b.getcount();
    a.getdata(100);
    b.getdata(200);
    a.getcount();
    b.getcount();
    return 0;
}
