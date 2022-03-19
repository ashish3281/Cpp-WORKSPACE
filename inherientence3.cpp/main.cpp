//program for single inherientence
#include <iostream>
#include<string.h>
using namespace std;
class student
{
public:

    char name[34];
    int rn;
    int attendence;
public:
    void input()
    {
        cout<<" \n enter the name :" ;
        cin>>name;
        cout<<"\n enter the roll no" ;
        cin>>rn;
        cout<<"\n enter the attendence";
        cin>>attendence;
    }
};
class marks:public student
{
    int m1,m2,m3;
    int total;
public:
    void enter_marks()
    {
        cout<<"\n enter marks of three subject";
        cin>>m1>>m2>>m3;
        total=m1+m2+m3;
    }
    void show_mark(){
        cout<<"\n total marks scored by the student:"<<total;
    }

};
int main()
{
    marks obj;
    obj.input();
    obj.enter_marks();
    obj.show_mark();

    return 0;
}
