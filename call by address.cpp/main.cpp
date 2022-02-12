#include <iostream>

using namespace std;

void square (int*);
int main()
{
    int num=5;
    int *ptr;
    ptr=&num;
    square(&num);
    cout<<num;
}
void square(int*p)
{
    *p=(*p)*(*p);
    cout<<"\n value is:"<<*p;
}
