//CONSTRUCTOR=IT IS A SPECIAL TYPE OF TASK WHOSE TASK IS TO
//INITIALIZE THE OBJECT OF THE class
#include <iostream>

using namespace std;

class marks
{
    int n,m;
public:
    marks()
    {
        n=12;m=13;
    }
    void add()
    {
        cout<<(n+m);
    }
};
int main()
{
    marks obj;
    obj.add();
    return 0;
}
