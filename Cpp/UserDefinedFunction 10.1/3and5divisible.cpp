#include<iostream>
using namespace std;


void div();//DECLARATION


int main(){
    div();
}


void div(){//DEFINITION
    int num;
    cout<<"Enter an number : ";
    cin>>num;
    if(num%3==0 && num%5==0){
        cout<<"Divisible by both 3 & 5.";
    }
    else{
        cout<<"Not divisible by 3 & 5.";
    }
}