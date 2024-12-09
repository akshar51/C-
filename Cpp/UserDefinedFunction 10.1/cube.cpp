#include<iostream>
using namespace std;


int cube(int n){
    int result=n*n*n;
    return result;
}

int main(){
    int c;
    cout<<"Enter any number for cube : ";
    cin>>c;
    cube(c);
    cout<<"Cube is : "<<cube(c);
}