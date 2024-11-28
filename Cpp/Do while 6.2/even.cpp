#include<iostream>
using namespace std;

int main(){
    // EVEN FROM 1 TO N

    int i=1,num;
    cout<<"Enter any number : ";
    cin>>num;
   
    do{
        if(i%2==0){
            cout<<i<<" ";
        }
        i++;
    }while(i<=num);
}