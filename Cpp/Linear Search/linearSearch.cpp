#include<iostream>
using namespace std;

int linear_search(int a[],int n){
    int key;
    cout<<"Enter your key : ";
    cin>>key;
    int index=-1;
    for(int i=0;i<n;i++){
        if(key==a[i]){
            index=i;
        }
    }
    return index;
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
    int founded=linear_search(a,n);

    if(founded==-1){
        cout<<"Element not founded.."<<endl;
    }
    else{
        cout<<"Element founded.."<<endl;
    }
    cout<<"Element founded at index : "<<founded<<endl;
}