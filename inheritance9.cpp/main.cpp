//hierarchical inheritance
#include <iostream>

using namespace std;
class university
{
    char name[45];

public:
    void input()
    {
        cout<<"\n enter the name of the university";
        cin>>name;
        }
        void display()
        {
            cout<<"\n name of the university is "<<name;
        }
};
class cse_dep:public university
{
    public:
    int block;
    int strength;
    public:
    void input1()
    {
        cout<<"\n enter block and strength :";
        cin>>block>>strength;
    }
    void display1()
    {
        cout<<"\n block is :"<<block;
        cout<<"\n strength of student :"<<strength;
    }
};
class ece_dep:public university
{
    public:
    int block1;
    int strength1;
    public:
    void input2()
    {
        cout<<"\n enter block1 and strength1 :";
        cin>>block1>>strength1;
    }
    void display2()
    {
        cout<<"\n block is :"<<block1;
        cout<<"\n strength of student :"<<strength1;
    }
};
int main()
{
    cse_dep d1;
    d1.input();
    d1.display();
    d1.input1();
    d1.display1();
    ece_dep d2;
    d2.input2();
    d2.display2();
    return 0;
}
