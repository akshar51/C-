#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>&a){
    for(int i=0;i<a.size();i++){

    }
}


void mergesort(vector<int>&a,int low,int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;

    // LEFT ARRAY
    mergesort(a,low,mid);

    // RIGHT ARRAY
    mergesort(a,mid+1,high);

    merge(a,low,mid,high);

}

void merge(vector<int>&a,int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;

    while(left<=mid && right<=high){
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            right++;
        }
    }
    while(left<=mid)
}



int main(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    vector <int> a;
    for(int i=0;i<n;i++){
        int element;
        cout<<"a["<<i<<"] = ";
        cin>>element;
        a.push_back(element);
    }

    print(a,n);
    mergesort(a,0,n-1);
    print(a,n);
}
