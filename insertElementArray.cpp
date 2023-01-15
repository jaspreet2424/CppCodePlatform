#include<iostream>

using namespace std;

    int main()
{
    int size , index , k;
    cout<<"Enter the size of the array "<<endl;
    cin>>size;

    int *arr = new int[size + 2];
    /*Why size + n (where I selected n = 2) ? Because at the time of insertion we want some some empty index to insert new element to the array*/

    cout<<"Enter the elements of the array "<<endl;
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    cout<<"The array indexes are "<<endl;
     for(int i = 0 ; i < size ; i++){
        cout<<i<<"\t";
    }
    cout<<"\nThe array elments are "<<endl;
     for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\nEnter the index at which you want to insert the element"<<endl;
    cin>>index;

    cout<<"Enter the element you want to insert"<<endl;
    cin>>k;

    for(int i = index ; i < size ; i++){
        arr[i+1] = arr[i]; 
    }
    arr[index] = k; 

    cout<<"The array indexes are "<<endl;
     for(int i = 0 ; i < size + 1; i++){
        cout<<i<<"\t";
    }
    cout<<"\nThe array elments are "<<endl;
     for(int i = 0 ; i < size + 1; i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}