#include<iostream>
using namespace std;

template<typename T>
T fact(int val){
    if(val==0){
        return 1;
    }
    return val*fact<int>(val-1);
}

int main(){
    int num,result;
    cout<<"Enter number of factorial : ";
    cin>>num;
    result=fact<int>(num);
    cout<<"Factorial is : "<<result;
}