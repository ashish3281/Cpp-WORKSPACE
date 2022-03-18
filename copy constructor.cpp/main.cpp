#include <iostream>

using namespace std;

class sample
{
    int a,b;
public:
    sample()//default constructor
    {
        a=0;
        b=0;
    }
    sample(int x,int y)//parametrized constructor
    {
        a=x;
        b=y;
    }
    sample(sample  & s4) //copy constructor[s4 is reference object]
    {
        a=s4.a;//s4 is the another name of s2
        a=s4.b;
    }
    void add()
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<a+b;
    }
};
int main()
{
    {
        sample s1;//default
        s1.add();
        sample s2(10,100);//para
        sample s3(s2);
        s2.add();
        s3.add();
    }
    return 0;
}
