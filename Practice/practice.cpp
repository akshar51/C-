#include<iostream>
using namespace std;

int main(){
    int a=10;
    int &y=a;

    cout<<a<<endl;
    cout<<&y<<endl;

    int *ptr=&y;
    cout<<&a<<endl;
    cout<<ptr<<endl;

    *ptr=*ptr+30;
    cout<<y<<endl;
    cout<<*ptr<<endl;
    cout<<a<<endl;

    
}