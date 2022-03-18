// DESTRUCTOR=DESTROY THE MEMORY GIVEN BY THE CONSTRUCTOR
 //DESTRUCTOR START WITH (~)TILDE
 #include <iostream>
#include<string.h>
using namespace std;
class student
{
public:
    int rn;
    char name[20];
public:
    student()
    {
        rn=20;
        strcpy(name,"ravi");
      // cout<<"\n enter the detail";
      // cin>>rn;
      // cin>>name[20];
    }
    void display()
    {
        cout<<"\n the roll no is"<<rn;
        cout<<"\n name is"<<name;
    }
    ~student()
    {
        cout<<"\n destructor called";
    }
};
int main()
{
    {
        student s1;
        s1.display();

    }
    return 0;
}
