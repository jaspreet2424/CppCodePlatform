#include<iostream>

using namespace std;

    int main()
{
    int row,col, k;
    cout<<"Enter the row of the array "<<endl;
    cin>>row;
    cout<<"Enter the column of the array "<<endl;
    cin>>col;
    int arr[row][col];
    cout<<"Enter the elements of the array "<<endl;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The array elements are "<<endl;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Enter the element to search "<<endl;
    cin>>k;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ;j++){
            if(arr[i][j] == k){
                cout<<"The element found at index ["<<i<<","<<j<<"]"<<endl;
            }
        }
    }
    // The size of the row and column  let be n , m , hence the loop traverses n*m time (* possibilty n = m)
    // to check the every occurance of k element in array and the time complexity of the algo is O(n*m) 
    //where n is the size of the array 

    return 0;
}