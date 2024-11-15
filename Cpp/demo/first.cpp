#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Hello world"<<endl;
   // cout<<"C plus"<<endl;
    //cout<<"Enter number :";
    //cin>>a;
    //cout<<"Value of a is :"<<a<<endl;
    //int b=10,c=20;
    //cout<<b+c;

    for( int i=1;i<=5;i++){
        for(int j=1;j<i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}