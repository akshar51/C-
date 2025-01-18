#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>&ar,int st,int end){
    int index=st-1;
    int pivot = ar[end];

    for(int j=st;j<end;j++){
        if(ar[j]<=pivot){
            index++;
            swap(ar[j],ar[index]);
        }
    }
    index++;
    swap(ar[end],ar[index]);
    return index;
}

void quicksort(vector<int> &ar,int st,int end){
    if(st<end){
        int pivIdx=partition(ar,st,end);
        quicksort(ar,st,pivIdx-1);
        quicksort(ar,pivIdx+1,end);
    }
}

int main(){
    vector<int> ar={12,31,35,8,32,17};
    quicksort(ar,0,ar.size()-1);
    for(int val : ar){
        cout<<val<<" ";
    }
    cout<<endl;
}