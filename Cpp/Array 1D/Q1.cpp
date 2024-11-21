#include<iostream>
using namespace std;

int main(){
    // FIND AVERAGE OF ALL ELEMENT

    int size,sum=0;
    cout<<"Enter array size : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter your element a["<< i <<"] : ";
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        sum+=arr[i];
    }

    cout<<"Average of all element is : "<<sum/size;

}