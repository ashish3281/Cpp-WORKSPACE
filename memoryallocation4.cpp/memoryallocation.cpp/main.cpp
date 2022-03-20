#include<iostream>
using namespace std;
int main()
{
    int *a=new int;
    *a=100;
    cout<<"\n the output of a is:"<<a;
    cout<<"\n the output of *a is:"<<*a;
    delete a;
    cout<<"\n output after the deletion a is:"<<a;
    cout<<"\n output after the deletion *a is:"<<*a;//garbage value
    return 0;
}
