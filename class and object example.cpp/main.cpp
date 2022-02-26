#include <iostream>

using namespace std;

class number //name of class
{
public://access specifires
    int a;//data members
    float b;//data members
    void multiply() //member function
    {
        cout<<"multiplication result is"<<a*b;
    }
    void add()
    {
        cout<<"addtion result is"<<a+b<<endl;
    }
};
int main()
{
    number n1;//object of class
    n1.a=30;
    n1.b=40;
    n1.add();
    n1.multiply();
    return 0;
}



