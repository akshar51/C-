#include<iostream>
using namespace std;

int main(){
    int size,i;
    cout<<"Enter array size : ";
    cin>>size;
    int ar1[size];
    int ar2[size];
    int ar3[size];

    cout<<"Enter array A element : "<<endl;
    for(i=0;i<size;i++){
        cout<<"ar1["<<i<<"] = ";
        cin>>ar1[i];
    }

    cout<<"Enter array B element : "<<endl;
     for(i=0;i<size;i++){
        cout<<"ar2["<<i<<"] = ";
        cin>>ar2[i];
    }

    for(i=0;i<size;i++){
       ar3[i]=ar1[i]+ar2[i];
    }

    cout<<"Array C is : ";
    for(int r : ar3){
        cout<<r<<" ";
    }


}