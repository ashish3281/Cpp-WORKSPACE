//basic to class conversion
#include<iostream>
using namespace std;
class time
{
    public:
    int hrs;
    int mins;
public:
    time(int t)
    {
        hrs=t/60;
        mins=t%60;
        cout<<hrs<<mins;
    }
};
int main()
{
    time t1;
    int duration =85;
    t1=duration;
    return 0;
}
