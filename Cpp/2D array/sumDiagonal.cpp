#include<iostream>
using namespace std;

int main(){
    int i,j,row,col,sum=0;
    cout<<"Enter array row : ";
    cin>>row;
    col=row;
    int ar[row][col];

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<"ar["<<i<<"]["<<j<<"] = ";
            cin>>ar[i][j];
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
           if(i==j){
            sum+=ar[i][j];
           }
        }
    }

    cout<<"Sum of diagonal element of an array : "<<sum;

}