#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout<<"Enter value of first number : ";
    cin>>a;
    cout<<"Enter value of second number : ";
    cin>>b;
    cout<<"Enter value of third number : ";
    cin>>c;
    cout<<"Enter value of fourth number : ";
    cin>>d;

    if(a>b){
        if(a>c){
            if(a>d){
                cout<<"Maximum value is : "<<a;
            }
            else{
                cout<<"Maximum value is : "<<d;
            }
        }
        else{
            if(c>d){
                cout<<"Maximum value is : "<<c;
            }
            else{
                cout<<"Maximum value is : "<<d;
            }
        }
    }
    else{
        if(b>c){
            if(b>d){
                cout<<"Maximum value is : "<<b;
            }
            else{
                cout<<"Maximum value is : "<<d;
            }
        }
        else{
            if(c>d){
                cout<<"Maximum value is : "<<c;
            }
            else{
                cout<<"Maximum value is : "<<d;
            }
        }
    }
}