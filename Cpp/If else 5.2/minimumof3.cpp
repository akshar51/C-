#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter value of first number : ";
    cin>>a;
    cout<<"Enter value of second number : ";
    cin>>b;
    cout<<"Enter value of third number : ";
    cin>>c;
    
    if(a<b){
        if(a<c){
            cout<<"Minimum value is : "<<a;
        }
        else{
            cout<<"Minimum value is : "<<c;
        }
    }
    else if(b<c){
        if(b<a){
            cout<<"Minimum value is : "<<b;
        }
        else{
            cout<<"Minimum value is : "<<c;
        }
    }
    else{
        cout<<"Minimum value is : "<<c;
    }
    
}