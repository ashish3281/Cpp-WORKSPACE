#include <iostream>

using namespace std;
class student
{
    char name[20];
    int m1,m2;//marks of student in two subject
public:
    int per;
public:
    student();
    void display()
    {
        cout<<"\n name is"<<name;
        cout<<"\n percentage of student is"<<per;
    }
};
student::student()
{
    cout<<"\n enter detail of student";
    cin>>name;
    cin>>m1>>m2;
    int total;
    total=m1+m2;
    per=total/2;
    cout<<per;
}
int main()
{
    student s1;
    student s2;
    if(s1.per>s2.per)
    {
        s1.display();
    }
    else
        s2.display();
    return 0;
}
