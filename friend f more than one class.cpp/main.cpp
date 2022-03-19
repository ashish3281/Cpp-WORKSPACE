#include <iostream>

using namespace std;
class second;
class first
{
private:
    int x;
public:
    void get(int i)
    {
        x=i;
    }
    friend void min(first f,second s);
};
class second
{
private:
    int y;
public:
    void get(int i)
    {
        y=i;
    }
    friend void min(first,second);
};
void min(first f,second s)
{
    if (f.x<s.y)
        cout<<f.x;
    else
        cout<<s.y;
}
int main()
{
    first f1;
    f1.get(10);
    second s1;
    s1.get(20);
    min(f1,s1);

    return 0;
}
