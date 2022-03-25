//OVERLOADING CONSTRUCTOR=IF ALL THE THREE CONSTRUCTOR
//(COPY,PARAMETRIZED AND DEFAULT)BELONG IN ONE code
 #include <iostream>

using namespace std;
class laptop
{
    int ram ,hdd;
public:
    laptop();//default
    laptop(int tram,int thdd);//parameterized
    laptop(laptop&obj);//copy
    void display()
    {
        cout<<ram<<""<<hdd<<endl;
    }
};
laptop::laptop()
{
    ram=0;
    hdd=0;
}
laptop::laptop(int tram=16,int thdd=500)
{
    ram=tram;
    hdd=thdd;
}
laptop::laptop(laptop&obj)
{
    ram=obj.ram;
    hdd=obj.hdd;
}
int main()
{
    laptop hp,dell(4),acer(dell);
    {
        laptop obj;
    }
    hp.display();
    dell.display();
    acer.display();
    return 0;
}
//OUTPUT=ERROR LAPTOP::LAPTOP() CANNOT BE OVERLOADED WITH LAPTOP::LAPTOP()
