#include<iostream>
using namespace std;

int main(){
    int size,i,sum=0;
    float total;
    cout<<"Enter array size : ";
    cin>>size;
    int ar[size];

    for(i=0;i<size;i++){
        cout<<"ar["<<i<<"] = ";
        cin>>ar[i];
    }

    for(i=0;i<size;i++){
       sum+=ar[i];
    }
    total=(float)sum/size;
    
    cout<<"Average of array : "<<total;
}