#include<iostream>
using namespace std;

int main(){
    int i;
    char str[20]="HelLo worLD";
    char toggle[20];

    for(i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            toggle[i]=str[i]+32;
        }
        else if(str[i]>='a' && str[i]<='z'){
            toggle[i]=str[i]-32;
        }
        else{
            toggle[i]=str[i];
        }
    }
    cout<<toggle;
    return 0;
}