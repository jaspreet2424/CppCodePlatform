#include<iostream>

using namespace std;
int main()
{
    int marks;
    cout<<"Enter the marks of student"<<endl;
    cin>>marks;

    if (marks >= 90 && marks <=100)
    {
        cout<<"The student secure very good marks and grade is A";
    }
    if (marks >= 80 && marks <=90)
    {
        cout<<"The student secure very good marks and grade is B ";
    }
    if (marks >= 65 && marks <=80)
    {
        cout<<"The student secure very good marks and grade is C ";
    }
    if (marks >= 40 && marks <=65)
    {
        cout<<"The student secure very good marks and grade is D ";
    }
    if ( marks < 40)
    {
        cout<<"The student fails in the exam ";
    }

    return 0;
}