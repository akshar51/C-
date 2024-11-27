#include<iostream>
using namespace std;

int main(){
    //5 4 3 2 1
    //- 5 4 3 2
    //- - 5 4 3 
    //- - - 5 4
    //- - - - 5

    for(int i=1;i<=5;i++){
        for(int k=1;k<i;k++){
            cout<<"  ";
        }
        for(int j=5;j>=i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}