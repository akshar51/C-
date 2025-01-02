#include<iostream>
using namespace std;

int main(){
    // SUM OF ELEMENT OF ROW AND COLUMN

    int row,col,choice,sum=0;
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
    cout<<endl;

    do{
        cout<<"Press 1 for row.. "<<endl;
        cout<<"Press 2 for column.. "<<endl;
        cout<<"Press 0 for exit.. "<<endl;

        cout<<"Enter your choice : ";
        cin>>choice;
        cout<<endl;

        switch(choice){
            case 1:
            int r;
            sum=0;
            cout<<"Enter row number : ";
            cin>>r;
            cout<<"Element of row : ";
            for(int i=0;i<row;i++){
                cout<<ar[r][i]<<" ";
                sum+=ar[r][i];
            }
            cout<<endl;
            cout<<"Sum of row "<<r<<" : "<<sum<<endl<<endl;
            break;

            case 2:
            int c;
            sum=0;
            cout<<"Enter column number : ";
            cin>>c;
            cout<<"Element of column : ";
            for(int i=0;i<col;i++){
                cout<<ar[i][c]<<" ";
                sum+=ar[i][c];
            }
            cout<<endl;
            cout<<"Sum of row "<<c<<" : "<<sum<<endl<<endl;
            break;

            case 0:
            break;
        }

    }while(choice!=0);
}