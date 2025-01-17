#include<iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int binary_search(int a[],int n,int st,int end,int target){
    if(st > end){
        return -1;
    }

    int mid=(st+end)/2;
    
    if(target==a[mid]){
        return mid;
    }
    else if(target<a[mid]){
        return binary_search(a,n,st,mid-1,target);
    }
    else{
        return binary_search(a,n,mid+1,end,target);
    }

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
        cout<<"Element founded at index : "<<founded<<endl;
    }
    


    return 0;
}