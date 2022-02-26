#include <iostream>
#include<string.h>

using namespace std;
class product
{
    int id;
    char name[20];
    float cost;
public:
    product()
    {
        id=121;
        strcpy(name,"pencil");
        cost=23.5;
    }
    product(int a,char s[],float c)
    {
        id=a;
        strcpy(name,s);//value of s passed in name
        cost=c;
    }
    void display();
};
void product::display()
{
    cout<<"\n name of product"<<name;
    cout<<"\n id="<<id;
    cout<<"\n cost="<<cost;
}
int main()
{
    product p;
    p.display();
    product p1(111,"pen",34.5);
    p1.display();
    product p2(222,"eraser",10.5);
    p2.display();
    return 0;

}
