#include<iostream>


using namespace std;
    int main()
{
    int month;
    cout<<"Enter your Birthday month "<<endl;
    cin>>month;
    switch (month)
    {
    case 1:
    cout<<"That means January";
        break;
    case 2:
    cout<<"That means Feburary";
        break;
    case 3:
    cout<<"That means March";
        break;
    case 4:
    cout<<"That means April";
        break;
    case 5:
    cout<<"That means May";
        break;
    case 6:
    cout<<"That means June";
        break;
    case 7:
    cout<<"That means July";
        break;
    case 8:
    cout<<"That means August";
        break;
    case 9:
    cout<<"That means September";
        break;
    case 10:
    cout<<"That means October";
        break;
    case 11:
    cout<<"That means November";
        break;
    case 12:
    cout<<"That means December";
        break;
    
    default:
    cout<<"There are only Twelve months";
        break;
    }

    return 0;
}