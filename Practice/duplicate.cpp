#include<iostream>
using namespace std;

int main(){

    // DELETING DUPLICATE IN ARRAY

    int size,count,i,j;
    cout<<"Enter array size : ";
    cin>>size;
    int ar[size];
    for(i=0;i<size;i++){
        cout<<"ar["<<i<<"] = ";
        cin>>ar[i];
    }

    for(i=0;i<size;i++){
        for(j=i+1;j<=size;j++){
            if(ar[i]!=ar[j]){
                j++;
            }
            else{
                size--;
                ar[j]=ar[j+1];
            }
        }
    }

    for(i=0;i<size;i++){
        cout<<ar[i]<<" ";
    }
   
       
   

}