#include<iostream>
using namespace std;

int main(){
    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1


    for(int i=1;i<=5;i++){
        for(int k=5;k>i;k--){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=i-1;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}