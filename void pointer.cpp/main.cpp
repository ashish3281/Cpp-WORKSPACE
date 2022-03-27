#include <iostream>

using namespace std;

int main()
{
    void *ptr;
    int num=50;
    char ch='a';
    float pi=3.14;
    ptr=&num ;
    cout << "value of integer variable is =" <<*(int*)ptr<< endl;
    ptr=&ch;
    cout<<"\n value of character variable is ="<<*(char*)ptr;
    ptr=&pi;
    cout<<"\n value of float variable is="<<*(float*)ptr;
    return 0;
}
