#include<iostream>
using namespace std;

int main(){
    // TRANSPOSE OF 2D ARRAY

    int row,col;
    cout<<"Enter row and column size : ";
    cin>>row;
    col=row;
    int ar[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"ar["<<i<<"]["<<j<<"] = ";
            cin>>ar[i][j];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<ar[j][i]<<" ";
        }
        cout<<endl;
    }
}