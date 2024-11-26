#include<iostream>
using namespace std;

int main(){
    // SUM OF BOUNDARY

    int ar[5][5];
    int i,j,sum=0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout<<"ar["<<i<<"]["<<j<<"] = ";
            cin>>ar[i][j];
        }
    }
    cout<<endl;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==0 || i==4 || j==0 || j==4){
                cout<<ar[i][j]<<" ";
                sum+=ar[i][j];
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Sum of all boundary element is : "<<sum;
}