#include<iostream>
using namespace std;

int main(){
    // ODD FROM N TO 1 USING WHILE LOOP
    
    int num;
    cout<<"Enter number : ";
    cin>>num;
    int i=num;
    while(i>=1){
        if(i%2==1){
            cout<<i<<" ";
        }
        i--;
    }
}