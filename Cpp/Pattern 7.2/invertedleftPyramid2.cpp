#include<iostream>
using namespace std;

int main(){
    //1 0 1 0 1
    //- 0 1 0 1
    //- - 1 0 1 
    //- - - 0 1
    //- - - - 1

    for(int i=5;i>=1;i--){
        for(int k=i;k<5;k++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            if(j%2==0){
               cout<<"0 "; 
            }
            else{
                cout<<"1 ";
            }
        }
        cout<<endl;
    }
}