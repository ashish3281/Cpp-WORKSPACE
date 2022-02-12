#include <iostream>

using namespace std;

void square(int&);
int main()
{
    int num=5;
    square(num);
}
void square(int&p)  //int&p=num
{
   p= p*p;
}
