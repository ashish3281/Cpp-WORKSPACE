#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s1 ,s2;
    int i;
    cout<<"\n enter the string: ";
    getline(cin,s1);
    cout<<"\n original string :"<<s1;
    for(i=0;s1[i]!='\0';i++){
        s2[i]=s1[i];
        cout<<"\n copy string :"<<s2[i];
    }
    int len;
    len=s1.length();
    cout<<"\n length of string :"<<len;

    //reverse the string
    for(i=len-1;i>=0;i--){
        cout<<"\n reverse of original string :"<<s1[i];
    }
    return 0;
}

