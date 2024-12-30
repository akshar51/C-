#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter array row size : ";
    cin>>row;
    cout<<"Enter array column size : ";
    cin>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"arr["<<i<<"]["<<j<<"] = ";
            cin>>arr[i][j];
        }
    }
    int max=arr[0][0];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           if(max<arr[i][j]){
                max=arr[i][j];
           }
        }
    }
    cout<<"Largest element is : "<<max;
}