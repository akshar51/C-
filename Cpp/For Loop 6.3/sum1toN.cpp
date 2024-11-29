#include<iostream>
using namespace std;

int main(){
    int i,num,sum=0;
    cout<<"Enter number : ";
    cin>>num;

    for(i=1;i<=num;i++){
        sum+=i;
    }
    cout<<"Sum of all number is : "<<sum;
}