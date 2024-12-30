#include<iostream>
using namespace std;

int main(){

    // DIGIT COUNTER IN NUMBER
    
    int num,i,count=0;
    cout<<"Enter your number of digit count : ";
    cin>>num;
    
    // for(;num>0;){
    //     num=num/10;
    //     count++;
    // }

    while(num!=0){
        num=num/10;
        count++;
    }

    cout<<"Number of digit is : "<<count;


}