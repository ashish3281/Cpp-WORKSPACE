#include <iostream>

using namespace std;

int main()
{
    int a=2,*p,**q;
    p = &a;
    q = &p;
    cout <<a;
    cout<<*p;
    cout<<a<<"is stored at"<<p<<"and pointer is stored at"<<q;
    return 0;
}
