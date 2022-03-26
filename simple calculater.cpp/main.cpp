#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int choice;
    cout<<"1.addition"<<endl;
    cout << "2.substract" << endl;
    cout<<"3.multiplication"<<endl;
    cout<<"enter your option";
    cin>>choice;
    cout<<"enter the two number "<<endl;
    cin>>a>>b;
    switch (choice)
    {
        case 1:
            cout<<"result of addition"<<a+b;
            break;
            case 2:
                cout<<"result of substract"<<a-b;
                break;
                case 3:
                    cout<<"result of multiplication"<<a*b;
                    break;
                default:
                    cout<<"enter valid choice";

    }
    return 0;
}
