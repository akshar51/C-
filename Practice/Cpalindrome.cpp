#include<iostream>
#include<string>
using namespace std;

int main(){
    int count=0;
    string str;
    cout<<"Enter string : ";
    cin>>str;

    for(int i=0;i<str.size()/2;i++){
            if(str[i]!=str[str.size()-1-i]){
                count=1;
                break;
            }
    }

    if(count==1){
        cout<<"String is not palindrome..."<<endl;
    }
    else{
        cout<<"String is palindrome...";
    }
}