//memory to the object of class dynamically
#include <iostream>

using namespace std;
class book
{
  string name;
  int cost;
  int pages;
  public:
      void input()
      {
          cout<<"\n enter the name";
          cin>>name;
          cout<<"\n enter the cost";
          cin>>cost;
          cout<<"\n enter the page";
          cin>>pages;
      }
      void display()
      {
          cout<<"\n name of book"<<name;
          cout<<"\n cost of book"<<cost;
          cout<<"\n pages"<<pages;
      }
};
int main()
{
    book *p=new book;
    p->input();
    p->display();
    delete p;
    return 0;
}
