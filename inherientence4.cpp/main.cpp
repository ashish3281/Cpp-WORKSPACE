//multilevel inheritance
#include <iostream>
using namespace std;
class person
{
protected:
    char name[34];
    int age;
};
class boy:public person
{
protected:
    int weight;
public:
    int height;
};
class student:public boy
{
public:
    int rn;
public:
    void getdata()
    {
        cout<<"enter name";
        cin>>name;
        cout<<"enter age";
        cin>>age;
        cout<<" enter weight";
        cin>>weight;
        cout<<"enter height";
        cin>>height;
        cout<<"enter rn";
        cin>>rn;
    }
    void showdata()
    {
        cout<<"enter name"<<name;
        cout<<"enter age"<<age;
        cout<<" enter weight"<<weight;
          cout<<"enter height"<<height;
          cout<<"enter roll no"<<rn;
    }
};
int main()
{
    student obj;
    obj.getdata();
    obj.showdata();
    return 0;
}
