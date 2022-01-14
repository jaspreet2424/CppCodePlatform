#include<iostream>


using namespace std;
    int main()
{
    int code ;
    cout<<"Enter the code number to choose the color"<<endl;
    cin>>code;

    if(code == 1)
    {
        cout<<"Color is Red"<<endl;
    }
    else if(code == 2)
    {
        cout<<"Color is white"<<endl;
    }
    else if(code == 3)
    {
        cout<<"Color is Yellow"<<endl;
    }
    else if(code == 4)
    {
        cout<<"Color is Green"<<endl;
    }
    else 
    {
        cout<<"No color code is defined"<<endl;
    }
    return 0;
}