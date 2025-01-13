#include<iostream>
#include<vector>
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
// void insertionSort(int ar[],int n){

//     for(int i=1;i<n;i++){
//         int key=ar[i];
//         int j=i-1;
//         while(j>=0 && key<ar[j]){
//             ar[j+1]=ar[j];
//             j--;
//         }
//         ar[j+1]=key;
//     }
// }

// void print(int ar[],int n){
//     for(int i=0;i<n;i++){
//         cout<<ar[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int n;
//     cout<<"Enter array size :  ";
//     cin>>n;
//     int ar[n];
//     for(int i=0;i<n;i++){
//         cout<<"ar["<<i<<"] = ";
//         cin>>ar[i];
//     }
//     cout<<endl;
//     cout<<"Array is : ";
//     print(ar,n);
//     insertionSort(ar,n);
//     //bubbleSort(ar,n);
//     cout<<"Sorted array is : ";
//     print(ar,n);
//     return 0;
// }


void merge(int ar[],int start,int mid,int end){
    vector<int> temp;
    int left=start;
    int right=mid+1;
    int index=0;
    while(left<=mid && right<=end){
        if(ar[left]<=ar[right]){
            temp[index]=ar[left];
            left++;
            index++;
        }
        else{
            temp[index]=ar[right];
            right++;
            index++;
        }
    }
    while(left<=mid){
        temp[index=ar[left];
    }
    while(right<=end){
        temp[index]=ar[right];
    }
}

void mergesort(int ar[],int start,int end){
    if(start==end){
        return;
    }
    int mid=start+end/2;
    mergesort(ar,start,mid);
    mergesort(ar,mid+1,end);
    merge(ar,start,mid,end);
}

void print(int ar[],int size){
    for(int i=0;i<size;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int ar[]={34,15,17,5,1,3};
    mergesort(ar,0,ar.size()-1);
    return 0;

}