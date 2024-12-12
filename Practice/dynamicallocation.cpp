#include<iostream>
using namespace std;

int main(){

    // HEAP & DELETE 

    // int *a=new int(6);
    // cout<<*a<<endl;
    // cout<<a<<endl;
    // delete a;
    // a=NULL;
    // cout<<a<<endl;

    // HEAP & DELETE FOR ARRAY
    
    int *a=new int[3];
    a[0]=1;
    a[1]=2;
    a[2]=3; 
    delete[] a;
    a=NULL;
}