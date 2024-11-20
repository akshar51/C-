#include<iostream>
using namespace std;

int main(){
    //Minimun number from 2 given number
    
    int first,second;
    cout<<"Enter your first number :";
    cin>>first;
    cout<<"Enter your second number :";
    cin>>second;

    if(first<second){
        cout<<"Minimum value is : "<<first;
    }
    else{
        cout<<"Minimum value is : "<<second;
    }
}