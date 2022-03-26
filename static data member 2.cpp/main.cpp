#include <iostream>

using namespace std;

class abc
{
public:
    int x,y;
    static int num; //declaration
    void show()
    {
        cout<<"\n enter the value";
        cin>>x>>y;
        cout<<x<<endl<<y<<endl;
        num++;
        cout<<" value of static variable"<<num;
    }
};
int abc::num=1;
int main()
{
    abc ob1,ob2;
    cout<<sizeof(ob1);
    ob1.show();
    ob2.show();
    return 0;
}
