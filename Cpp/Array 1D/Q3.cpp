#include<iostream>
using namespace std;

int main(){
    // 1-D ARRAY OF ALL LEAP YEAR

    int st,end;
    int arr[100],j=0;
    cout<<"Enter starting year : ";
    cin>>st;
    cout<<"Enter ending year : ";
    cin>>end;

    for(int i=st;i<=end;i++){
            if(i%4==0){
                arr[j]=i;
                j++;
            }
    }
    for(int k=0;k<j;k++){
        cout<<arr[k]<<endl;
    }
   
    return 0;
}