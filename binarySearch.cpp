#include<iostream>

int binarySearch(int arr[] , int low , int high , int k ){
    if(low < high){
        int mid = (low + high)/2;
        if(arr[mid] == k){
            return mid;
        }
        else if (arr[mid] > k){
            return binarySearch(arr , low , mid - 1 , k);
        }
        else if (arr[mid] < k){
            return binarySearch(arr , mid + 1  , high, k);
        }
    }

    return -1;
}

using namespace std;

    int main()
{
    int size ;
    int k ; 
    cout<<"Enter the size of the array "<<endl;
    cin>>size;
    int *arr = new int[size];
    cout<<"Enter the elements of the array "<<endl;
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to search"<<endl;
    cin>>k;
    int result = binarySearch(arr , 0 , size , k);

    if(result == -1){
        cout<<"Element not found in the array "<<endl;
    }
    else{
        cout<<"Element found at index "<<result<<endl;
    }

    return 0;
}