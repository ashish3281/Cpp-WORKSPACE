#include <iostream>

using namespace std;

int count1=0;//gobal variable
class test
{
public:
    test()
   {


    count1++;
    cout<<"constructor msg:object number"<<count1<<"created.."<<endl;}
    ~test()
    {
        cout<<"destructor msg: object number"<<count1<<"destroyed..";
        count1--;
    }
};
int main()
{
    cout<<"inside main block"<<endl;
    cout<<"creating first object"<<endl;
{
    test t1;
    {
        cout<<"inside block 1"<<endl;
        cout<<"creating two more objects t2 and t3"<<endl;
        test t2,t3;
        cout<<"leaving block 1"<<endl;
    }
    cout<<"back inside main"<<endl;
}
return 0;

}
