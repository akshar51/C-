#include<iostream>
using namespace std;

int main(){
    int size,i,length=0;
    cout<<"Enter array size : ";
    cin>>size;
    int ar[size];

    for(i=0;i<size;i++){
        cout<<"ar["<<i<<"] = ";
        cin>>ar[i];
        length++;
    }

    cout<<"Length of array : "<<length;
}