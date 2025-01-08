#include<iostream>
using namespace std;

void insertionSort(int [],int);
void print(int [],int);

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
    cout<<"Array is : ";
    print(a,n);
    insertionSort(a,n);
    cout<<"Array after sorted : ";
    print(a,n);
}


void print(int a[],int n){
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int a[],int n){
    // UNSORTED OUTER LOOP
    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 && key<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
