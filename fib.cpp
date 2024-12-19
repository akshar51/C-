#include<iostream>
using namespace std;

int main(){
    int num,a=0,b=1,fib=0;
    cout<<"enter num : ";
    cin>>num;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=num;i++){
        fib=a+b;
        cout<<fib<<" ";
        a=b;
        b=fib;        
    }
} 