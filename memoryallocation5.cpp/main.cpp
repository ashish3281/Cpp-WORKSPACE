////compile time memory allocation
#include<iostream>
using namespace std;
class student
{
protected:
    int rn,fees;
public:
    void read()
    {
        cin>>rn;
        cin>>fees;
    }
    void display()
    {
        cout<<"\n roll no is "<<rn;
        cout<<"\n fee is"<<fees;
    }
};
int main()
{
    student *p;
    p=new student[3];
    int i;
    for( i=0;i<3;i++)
    {
        p[i].read();
        p[i].display();
    }
    delete [] p;
    return 0;
}
