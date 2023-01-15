#include<iostream>

using namespace std;

    int main()
{
    int size, k;
    cout<<"Enter the size of the array "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array "<<endl;
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to search "<<endl;
    cin>>k;
    for(int i = 0 ; i < size ; i++){
        if(arr[i] == k){
            cout<<"The element found at index - "<<i<<endl;
        }
    }
    // The size of the array let be n , hence the loop traverses n time 
    // to check the every occurance of k element in array and the time complexity of the algo is O(n) 
    //where n is the size of the array 
    return 0;
}