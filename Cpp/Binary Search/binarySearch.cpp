#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void binary_search(int a[],int n,int st,int end,int target){

}


int main(){
    int n,target;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
    cout<<endl;
    cout<<"Array element is : ";
    print(a,n);
    cout<<"Enter your target : ";
    cin>>target;
    int founded=binary_search(a,n,0,n-1,target);

    if(founded==-1){
        cout<<"Element not founded...."<<endl;
    }
    else{
        cout<<"Element founded...."<<endl;
    }


    return 0;
}