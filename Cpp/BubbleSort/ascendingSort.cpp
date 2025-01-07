#include<iostream>
using namespace std;


// -------- ASCENDING BUBBLE SORT------------

void bubble(int a[],int n){
    int pass=1;
    while(pass<=n-1){
        for(int j=0;j<n-pass;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        pass++;
    }
}

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
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

    cout<<"Array element is : ";
    print(a,n);
    cout<<endl;
    cout<<"Array after bubble sort : ";
    bubble(a,n);
    print(a,n);

    return 0;
    
    


}