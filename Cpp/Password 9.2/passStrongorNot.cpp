#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main(){
    int i,j,alp=0,smalp=0,num=0,spch=0,ct=0;
    char pass[50]="1DDAzD@A";
    int length=strlen(pass);
    // cout<<length;

    if(length<=6){
        cout<<"Password must be atleast 6 character...";
    }
    else{
        for(i=0;i<length;i++){
            if(pass[i]>='A' && pass[i]<='Z'){
                alp++;
            }
            else if(pass[i]>='a' && pass[i]<='z'){
                smalp++;
            }
            else if(pass[i]>=49 && pass[i]<=57){
                num++;
            }
            else if(pass[i]==64){
                spch++;
            }
            else{
                ct=0;
            } 
        }
    }
   

    if(alp!=0 && smalp!=0 && num!=0 && spch!=0){
        cout<<"Your password is strong...";
    }
    else{
        cout<<"Not strong password...";
    }
    
}