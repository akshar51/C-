#include<iostream>
#include<vector>
using namespace std;


// MERGE 2 HALVES OF ARRAY
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

    while(left<=mid){
        temp.push_back(a[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(a[right]);
        right++;
    }

    for(int i=low;i<=high;i++){
        a[i]=temp[i-low];
    }

}


// DIVIDE ARRAY INTO 2 PART
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

void print(vector<int>&a,int n){

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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

    cout<<"Array is : ";
    print(a,n);
    mergesort(a,0,n-1);
    cout<<"Sorted array is : ";
    print(a,n);
}
