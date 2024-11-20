#include<iostream>
using namespace std;

int main(){
    //GIVEN NUMBER IS NEUTRAL OR NOT

    int num;
    cout<<"Enter your number :";
    cin>>num;

    if(num<0){
        cout<<"Number is negative.";
    }
    else if(num>0){
        cout<<"Number is positive";
    }
    else{
        cout<<"Number is neutral.";
    }

}