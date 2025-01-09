#include<iostream>
using namespace std;

class sort{
    public:
    void selectionsort(int a[],int n){
        for(int i=0;i<n-1;i++){
            int min_index=i;
            for(int j=i+1;j<n;j++){
                if(a[j]<a[min_index]){
                    min_index=j;
                }
            }
            int temp=a[min_index];
            a[min_index]=a[i];
            a[i]=temp;
        }
    }

    void print(int a[],int n){
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    sort a;
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"] = ";
        cin>>ar[i];
    }
    cout<<"Array is : ";
    a.print(ar,n);
    cout<<"Sorted array is : ";
    a.selectionsort(ar,n);
    a.print(ar,n);


}