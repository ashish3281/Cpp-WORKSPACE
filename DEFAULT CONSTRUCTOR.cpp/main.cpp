//DEFAULT CONSTRUCTOR=NO ARGUMENT PASS
#include <iostream>

using namespace std;

class sample
{
    int a,b;
public:
    sample()//default constructor
    {
        a=100;
        b=500;
    }
    void display()
    {
        cout<<a<<endl<<b;
    }
};
int main()
{
    sample s;
    s.display();
    return 0;
}
