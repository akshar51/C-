#include<iostream>
using namespace std;


int sum(int [],int);

int main(){
    int i,size;
    cout<<"Enter array size : ";
    cin>>size;
    int ar[size];
    for(i=0;i<size;i++){
        cout<<"ar["<<i<<"] = ";
        cin>>ar[i];
    }
    sum(ar,size);
    cout<<"Sum of all element is : "<<sum(ar,size);
}

int sum(int ar[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=ar[i];
    }
    return sum;
}