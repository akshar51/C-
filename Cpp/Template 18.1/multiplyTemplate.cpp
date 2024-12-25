#include<iostream>
using namespace std;

template<typename T>
T add(T a,T b){
    return a*b;
}

int main(){
    int a,b,result;
    cout<<"Enter first value : ";
    cin>>a;
    cout<<"Enter second value : ";
    cin>>b;
    result=add(a,b);
    cout<<"Addition is : "<<result;


}