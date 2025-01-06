#include<iostream>
#include<string>
using namespace std;

int main(){
    int count=0;
    string str;
    cout<<"Enter string : ";
    cin>>str;

    for(int i=0;i<str.size();i++){
        for(int j=str.size()-1;j>=0;j--){
            if(str[i]!=str[j]){
                count=1;
                break;
            }
        }
    }

    if(count==1){
        cout<<"String is not palindrome..."<<endl;
    }
    else{
        cout<<"String is palindrome...";
    }
}