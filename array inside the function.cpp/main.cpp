#include <iostream>

using namespace std;
int fun(char arr[20]);
int main()
{
    char arr[20];
    cout << "enter string" << endl;
    gets(arr);
    int res=fun(arr);//base address of array
    cout<<res;
    return 0;
}
int fun(char arr[20])
{
    int i,count=0;
    for(i=0;arr[i]!='\0';i++)
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
        count ++;
    return count;
}
