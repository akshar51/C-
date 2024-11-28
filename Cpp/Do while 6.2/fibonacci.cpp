#include<iostream>
using namespace std;

int main(){

    int a=0,b=1,i,num,fib=0;
    cout<<"Enter a number for fib : ";
    cin>>num;

    cout<<a<<" "<<b<<" ";
    for(i=1;i<=num;i++){
        fib=a+b;
        cout<<fib<<" ";
    }
}