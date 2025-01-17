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
    print(a,n);
    cout<<"Enter your target : ";
    
}