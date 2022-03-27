#include<iostream>
#include<string.h>
using namespace std;
int main()
{

    string s1;
    int count=0;
    int i;
    char ch;
    cout<<"\n enter the string";
    getline(cin,s1);
    cout<<"\n enter the character to be searched : ";
    cin>>ch;
    for(i=0;s1[i]!='\0';i++)
    {

        if(ch==s1[i])
        {
            count++;

        }
    }
    cout<<"\n number of times character has occured : "<<count;

    //change lowercase to upper case
    for(i=0;s1[i]!='\0';i++)
    {
        s1[i]=s1[i]-32;
        cout<<"\n"<<s1[i];
    }
}
