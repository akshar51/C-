#include<iostream>
#include<vector>
using namespace std;

int main(){
    // REVERSE OF VECTOR
    // int size;
    // cout<<"Enter vector size : ";
    // cin>>size;
    // vector<int> v(size);
    // vector<int> ans(size);
    // for(int i=0;i<v.size();i++){
    //     cout<<"v["<<i<<"] = ";
    //     cin>>v[i];
    // }

    // for(int i=0;i<v.size();i++){
    //     ans[i]=v[size-1];
    //     size--;
    // }

    // cout<<"Reverse of vector is : ";
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }

    //------------ PRINT SMALLEST VALUE FROM LEFT AND RIGHT -----------------

    // vector<int> v={2,-2,3,0,7,1,5};
    // vector<int> ans;

    
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }    
    // cout<<endl;

    // for(int i=1;i<v.size()-1;i++){
    //     if(v[i]<v[i-1] && v[i]<v[i+1]){
    //         ans.push_back(v[i]);
    //     }
    // }

    // cout<<"Smallest value is : ";
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }

    //------------------------ NxN MATRIX USING MATRIX -----------------
    int n;
    cout<<"Enter value : ";
    cin>>n;
    vector<int> v(n,n);
    vector<vector<int>> v1(n,v);
    for(vector<int> el:v1){
        for(int b:el){
            cout<<b<<" ";
        }
        cout<<endl;
    }
    
    



}