#include <iostream>

using namespace std;
class add
{ public:
    int a[2][2];
    int b[2][2];
    int c[2][2];
    void input()
    {
        int i,j;
        cout<<"\n enter value of first matrix";
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                cin>>a[i][j];
            }
        }
            cout<<"\n enter value of second matrix";
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                cin>>b[i][j];
            }

        }

    }
    void output()
    {
        int i,j;
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
             c[i][j]=a[i][j]+b[i][j];
            }
        }
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                cout<<c[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }

};
int main()
{
    add a1;
    a1.output();
    a1.input();
    a1.output();
    return 0;
}
