#include<iostream>
using namespace std;

void print(int a[],int n){
    cout<<"Array is : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}



int main(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<endl;

    insertionSort(a,n);
    print(a,n);
}