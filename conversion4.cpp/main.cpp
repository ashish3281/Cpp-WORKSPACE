//class to basic conversion
#include <iostream>

using namespace std;
class temp
{
   float temp_f;
   public:
       void input()
       {
           cout<<"\n enter the temperature in faren";
           cin>>temp_f;
       }
       operator float()
       {
           float f;
           f = (temp_f-32)/1.8;
           return f;
       }
};
int main()
{
    temp t1;
    t1.input();
    float c1;
     c1=t1;
    cout<<"\n temperature in celcius is :"<<c1;
    return 0;
}
