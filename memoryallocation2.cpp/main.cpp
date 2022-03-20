#include <iostream>

using namespace std;

int main()
{
    float *ptr=new float;
    cout << "enter the radius" << endl;
    cin>>*ptr;
    cout<<"\n area of circle is:"<<3.14**(ptr)**(ptr);
    delete ptr;
    cout<<"\n"<<*ptr;
    return 0;
}
