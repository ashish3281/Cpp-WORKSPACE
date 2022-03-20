#include <iostream>

using namespace std;

class book
{
public:
    char name[20];
    int pages;
    float cost;
public:
    void input()
    {
        cout<<"\n enter name of book";
        cin>>name;
        cout<<"/n enter page of the book";
        cin>>pages;
        cout<<"/n enter cost of the book";
        cin>>cost;
    }
    void display()
    {
        cout<<"name of the book is "<<name<<endl;
        cout<<"pages of the book is "<<pages<<endl;
        cout<<"cost of the book is "<<cost<<endl;
    }
};
int main()
{
    book b1;
    cout<<"/n bytes of memory b1 object="<<sizeof(b1);
    b1.input();
    b1.display();
    //cout<<endl<<b1.pages;
    return 0;
}

