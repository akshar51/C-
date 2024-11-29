#include<iostream>
using namespace std;

int main(){
    // LEAP YEAR
    int st,end;
    cout<<"Enter start year : ";
    cin>>st;
    cout<<"Enter end year : ";
    cin>>end;
    int i=st;
    while(i<=end){
        if(i%4==0 && i%100!=0||i%400==0){
            cout<<i<<" ";
        }
        i++;
    }
}