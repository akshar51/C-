#include<iostream>
#include<string>
using namespace std;

int len(string);

int main(){
    string name;
    cout<<"Enter your string : ";
    cin>>name;
    cout<<"Length is : "<<len(name);

}

int len(string name){
    int len=0;
    for(int i=0;name[i]!='\0';i++){
        len++;
    }
    return len;
}