#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"entre the three value";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"the largest number="<<a;
    }
    else if(b>a&&b>c)
    {
        cout<<"the largest number ="<<b;
    }
    else
        {
            cout<<"the largest number="<<c;
        }
    return 0;
}
