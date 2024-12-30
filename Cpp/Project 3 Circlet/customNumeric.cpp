#include<iostream>
using namespace std;

int main(){
    // 1 2 3 4 5 5 4 3 2 1
    int n=5;
    for(int i=1;i<=2;i++){
        if(i==1){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
        }
        else{
            for(int i=n;i>=1;i--){
                cout<<i<<" ";
            }
        }
    }
}