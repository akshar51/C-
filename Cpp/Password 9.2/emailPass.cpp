#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main(){
    int i,cp=0,sm=0,num=0,spch=0,ct=0;
    char email[50]="xyzz@gmail.com";
    char pass[50]="123456";
    int length=strlen(email);
    int l2=strlen(pass);
    // cout<<length<<endl;
    // cout<<l2;
   
   
    for(i=0;email[i]!='g';i++){
            if(email[i]>='A' && email[i]<='Z'){
                cp++;
            }
            else if(email[i]>='a' && email[i]<='z'){
                sm++;
            }
            else if(email[i]>=49 && email[i]<=57){
                num++;
            }
            else if(email[i]==64 || email[i]==46){
                spch++;
            }
            else{
                ct++;
            } 
    }
    cout<<sm<<endl;
    cout<<spch<<endl;

    if(sm<=3  || spch==0){
        cout<<"Login failed...";
    }
    else{
        cout<<"Login successful..";
    }

}