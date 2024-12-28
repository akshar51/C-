#include<iostream>
using namespace std;

int main(){
    int num,lastdigit,firstdigit,result;
    cout<<"Enter your digit for addition of first and last digit : ";
    cin>>num;

    if(num<10){
        result=num;
    }
    else{
    lastdigit=num%10;
    while(num>=10){
        num=num/10;
    }
    firstdigit=num;
    result=lastdigit+firstdigit;
    }
    
    cout<<"Sum of last and first digit is : "<<result;
    
}