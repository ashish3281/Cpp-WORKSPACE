//write a program to implement concept of modes of inheritance
#include<iostream>
using namespace std;
class A
{
 public://private -if its private give an error int base::a is a private
    int basket;
 public:
    void funcA(void)
    {
        int one=1;
        cout<<"this is parent or base class"<<one<<endl;
    }
};
class B:public A
{
 public:
    int two=2;
    void funcB(void)
    {
    cout<<"this is derived class for a and base class for b"<<two<<endl;
    }
};
 class C:public B
 {
 public:
    int three=3;
    void funcC(void)
    {
        cout<<"this is derived class for b and base class for a"<<three<<endl;
    }
 };
 int main()
 {
     cout<<"this is the size of class A"<<sizeof(A)<<endl;
     cout<<"this is the size of class B"<<sizeof(B)<<endl;
     cout<<"this is the size of class C"<<sizeof(C)<<endl;
     C object1;
     object1.funcA();
     object1.funcB();
     object1.funcC();
     return 0;
 }
