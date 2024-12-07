#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int i;
    string name="hello world";
    // for(char e:name){
    //     if(e>='a' && e<='z'){
    //         e-=32;
    //     }
    //     cout<<e;
    // }
   
    for(i=0;i<=name.size();i++){
        if(name[i]>='a' && name[i]<='z'){
            name[i]-=32;
        }
    }

    for(i=0;i<=name.size();i++){
       cout<<name[i];
    }
    
}