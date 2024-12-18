#include<iostream>
#include<vector>
using namespace std;

int main(){
    // REVERSE OF VECTOR
    vector<int> ans;
    int size;
    cout<<"Enter vector size : ";
    cin>>size;
    vector<int> v(size);
    
    for(int i=0;i<v.size();i++){
        cout<<"v["<<i<<"] = ";
        cin>>v[i];
    }

    for(int i=0;i<size-1;i++){
        ans[i]=v[size-1];
        size--;
    }

    cout<<"Reverse of vector is : ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    



}