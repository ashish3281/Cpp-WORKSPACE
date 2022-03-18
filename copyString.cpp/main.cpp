#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s1;
    cout<<"enter the string : ";
    getline(cin,s1);
    cout<<s1;
    string s2(s1);  //string s2=s1;
    cout<<"\n"<<s2;
    return 0;
}
/*copy character by charecter
for(i=o;s1[i]!='\0';i++)
{
/*s2[i]=s1[i];
    count<<s2[i];
}

length of string
int len;
len=s1.length();
cout<<len<<endl;*/
