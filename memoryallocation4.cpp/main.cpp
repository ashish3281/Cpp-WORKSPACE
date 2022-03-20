//run time memory allocation
#include <iostream>

using namespace std;

int main()
{
    int n;
    float avg;
    cout << "enter the number of student" << endl;
    cin>>n;
    float *grades=new float[n];
    float sum=0.0;
    for(int i =0;i<n;i++)
    {
        float mark;
        cout<<"\n input grade for student"<<(i+1);
        cin>>mark;
        //grades[i]=marks;
        sum =sum+mark;
    }
    avg=sum/n;
    cout<<"\n  avg is :"<<avg;
    delete [] grades;
    for(int x=0;x<n;x++)
    {
        cout<<grades[x]<<endl;
    }
    return 0;
}
