#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main(){
    int i,j,count=0,ans;
    char pass[50]="Admin@123";
    int length=strlen(pass);
    // cout<<length;

    if(length<=6){
        cout<<"Password must be atleast 6 character...";
    }
    else{
        for(i=0;i<length;i++){
            if(pass[i]>='A' && pass[i]<='Z'){
                count++;
            }
            else if(pass[i]>='a' && pass[i]<='z'){
                count++;
            }
            else if(pass[i]>=1 && pass[i]<=9){
                count++;
            }
            else if(pass[i]=='@'){
                count++;
            }
            else{
                count=0;
            } 
        }
    }

    if(count>0){
        cout<<"Your password is not strong...";
    }
    else{
        cout<<"Your password is strong...";
    }
    
}