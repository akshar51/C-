#include<iostream>
using namespace std;


int main(){
    int size,ind,value,i,ele,j;
    cout<<"Enter array size : ";
    cin>>size;
    int a[size];


    for(i=0;i<size;i++){
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }

    cout<<"Enter index value to change : ";
    cin>>ind;
    cout<<"Enter number of element : ";
    cin>>ele;

    if(ele==1){
        cout<<"Enter your element : ";
        cin>>value;
        for(i=0;i<size;i++){
            if(i==a[ind]){
                a[ind]=value;
            }
        }
    }
    else{
        size=size+ele;
         for(i=0;i<=size;i++){
            if(i==ind){
                for(i=size-1;i>ind+1;i--){
                    a[i]=a[i-ele];
                }
            }
        }
        for(j=ele+1;j>=ind;j--){
                    cout<<"a["<<j<<"] = ";
                    cin>>a[j];
        }
    }
    
     for(i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    
    // if(ind>=size+1){
    //     cout<<"Enter valid index...";
    // }
    // else{
    //     for(i=0;i<size;i++){
    //         if(i==a[ind]){
    //             a[ind]=value;
    //         }
    //     }
    // }

   
}