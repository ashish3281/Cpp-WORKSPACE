#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char name[30]="ashishGoyal";
    cout<<"\n"<<name;
    string s="smart";
    cout<<"\n"<<s;
    string s1("hardWorking");
    cout<<"\n"<<s1;
    string s2(6,'g');
    cout<<"\n"<<s2;
    string s3;
    cin>>s3;
    string s4;
    cin>>s4;
    getline(cin,s4);
    cout<<"\n"<<s4;
    return 0;
}
