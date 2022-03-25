//PARAMETRISED CONSTRUCOR=THE CONSTRUCTOR THAT CAN TAKE argument
#include <iostream>

using namespace std;

class sample
{
public:
    int rn;
    float marks;
    char name[20];
    sample()//default constructor
    {
        rn=10;
        marks=56.5;
       cout<<"\n enter the name";
       cin>>name;
    }
    sample(int a,float b)//parameterized constructor(take argument)
    {
        rn=a;
        marks=b;
        cout<<"\n enter the name";
        cin>>name;
    }
    void display()//member function
    {
        cout<<"\n name of the student is "<<name;
        cout<<"\n roll no of the student is"<<rn;
        cout<<"\n marks is"<<marks;
    }
};
int main()
{
    sample s1;//default constructor call
    s1.display();//member function call
    sample s2(12,45.6);//parameterized call
    s2.display();//member function call
    return 0;
}
