#include<iostream>

using namespace std;
    int main()
{
    int num;
    cout<<"Enter any number"<<endl;
    cin>>num;

    if (num%2 == 0)
    {
        cout<<"The given number is even "<<num;
    }
    else
    {
        cout<<"The given number is not even "<<num;
        
    }
    return 0;
}