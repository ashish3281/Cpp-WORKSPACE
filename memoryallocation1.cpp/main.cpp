#include <iostream>

using namespace std;

int main()
{
    int *a=new int;
    *a=100;
    cout<<"\n the output is:a="<<a;
    cout << "the output is:*a="<<*a << endl;
    delete a;
     cout<<"\n after delete the output is:a="<<a;
    cout << " after delete the output is:*a="<<*a << endl;//garbage value
    return 0;
}
