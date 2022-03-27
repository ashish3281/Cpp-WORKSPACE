#include <iostream>

using namespace std;

class circle
{
private:
    double radius;
public:
    void compute_area(double r)
    {
        radius=r;
        double area=3.14*radius*radius;
        cout<<"radius is"<<radius<<endl;
        cout<<"area is"<<area;
    }
};
int main()
{
    circle obj;
   // obj.radius=5.5; error trying to access private data member
   //directly outside the class
    obj.compute_area(1.5);
    return 0;
}
