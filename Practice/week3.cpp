#include<iostream>
using namespace std;
// BUBBLE SORT
// void bubbleSort(int ar[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(ar[j]>ar[j+1]){
//                 swap(ar[j],ar[j+1]);
//             }
//         }
//     }

// }

// INSERTION SORT
void insertionSort(int ar[],int n){

    for(int i=1;i<n-1;i++){
        int key=ar[i];//10
        int j=i-1;//20
        while(j>=0 && key<ar[j]){
            ar[j]=ar[j+1];
            j--;
        }
        ar[j+1]=key;
    }
}

void print(int ar[],int n){
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter array size :  ";
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cout<<"ar["<<i<<"] = ";
        cin>>ar[i];
    }
    cout<<endl;
    cout<<"Array is : ";
    print(ar,n);
    insertionSort(ar,n);
    //bubbleSort(ar,n);
    cout<<"Sorted array is : ";
    print(ar,n);
    return 0;
}