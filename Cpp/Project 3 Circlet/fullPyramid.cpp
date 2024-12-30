#include<iostream>
using namespace std;

int main(){
    // - - - - 5
    // - - - 4 5 4
    // - - 3 4 5 4 3
    // - 2 3 4 5 4 3 2
    // 1 2 3 4 5 4 3 2 1
    int i,j,k,l;
    for(int i=0;i<=4;i++){
        for(int k=4;k>i;k--){
            cout<<"  ";
        }
        for(int l=5-i;l<=5;l++){
            cout<<l<<" ";
        }
        for(int j=4;j>=5-i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}