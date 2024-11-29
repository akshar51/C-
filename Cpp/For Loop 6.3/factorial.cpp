#include<iostream>
using namespace std;

int main(){
    //FACTORIAL USING FOR LOOP

    int num,fact=1;
    cout<<"Enter number : ";
    cin>>num;

    for(int i=1;i<=num;i++){
        fact=fact*i;
    }

    cout<<"Factorial is : "<<fact;
}