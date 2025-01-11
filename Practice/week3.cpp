#include<iostream>
using namespace std;

void bubbleSort(){

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
    bubbleSort(ar,n);
    cout<<"Sorted array is : ";
    print(ar,n);
    return 0;
}