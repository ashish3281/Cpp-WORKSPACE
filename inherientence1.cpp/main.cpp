#include <iostream>
#include<conio.h>
using namespace std;
class base
{
    public:
    int a;
public:
    void input()
    {
        cout<<"enter the value of a:";
        cin>>a;
    }
    void display()
    {
        cout<<"value of a is :"<<a;
    }
};
class derived:public base
{
    public:
   int b,c;
   public:
       void show()
       {
           cout<<a;
           cout<<"enter the value of b and  c:";
           cin>>b>>c;
           cout<<"value of b and c is"<<b<<c;
       }
};
int main()
{
    derived d;
    cout<<sizeof(d);
    d.input;
    d.display;
    d.show;
getch();
    return 0;
}
