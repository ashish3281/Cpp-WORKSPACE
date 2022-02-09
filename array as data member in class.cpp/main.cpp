#include <iostream>

using namespace std;

class student
{
    int rn;int age;
    int marks[3];
public:
    void input()
    {
        cout<<"\n enter roll no";
        cin>>rn;
        cout<<"\n enter age of student";
        cin>>age;
        cout<<"\n enter the marks of three subjects";
        int i;
        for(i=0;i<3;i++)
        {
            cin>>marks[i];
        }
    }
    void percentage()
    {
        cout<<"\n roll no is"<<rn;
        cout<<"\n age is"<<age;
        int total=0,i;
        float per;
        for(i=0;i<3;i++)
        {
            total=total+marks[i];
        }
        per=total/3.0;
        cout<<"\n percentage scored by student is"<<per;
    }
};
int main()
{
    student s1;
    s1.input();
    s1.percentage();
    return 0;
}
