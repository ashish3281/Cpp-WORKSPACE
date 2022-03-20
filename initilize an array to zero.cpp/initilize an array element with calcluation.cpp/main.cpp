#include <iostream>
#define size10
using namespace std;

int main()
{
    int n[size],i;
    for(i=0;i<size;i++)
    {
        n[i]=0;
    }
    cout << "elements"<<"\t value" << endl;
    for(i=0;i<size;i++)
    {
        cout<<i<<"\t"<<n[i];
    }
    return 0;
}
