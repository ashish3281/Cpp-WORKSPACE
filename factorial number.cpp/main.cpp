#include <iostream>

using namespace std;

int main()
{
    int num,fact=1,i;
    cout << "\n enter the number for factorial" << endl;
    cin>>num;
    for(i=num;i>=1;i--)
    {
        fact=fact*i;
    }
    cout<<"\n factorial of number is"<<fact;
    return 0;
}
