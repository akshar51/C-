#include<iostream>
#include<string>
using namespace std;

class stack{
    int* ar;
    int top;
    int size;

    public:
    stack(int size){
        ar=new int[size];
        this->top=-1;
        this->size=size;
    }

    void push(int ele){
        if(this->top==size-1){
            cout<<"Stack overflow..";
        }
        else{
            this->top++;
            ar[top]=ele;
        }
    }

    char pop(){
        if(this->top==-1){
            cout<<"Stack underflow..";
            return 0;
        }
        else{
            return this->ar[top--];
        }
    }

    bool palindrome(string str){
        for(char ch:str){
            push(ch);
        }
        for(char ch:str){
            if(pop()!=ch){
                return false;
            }
            cout<<endl;
        }
        return true;
    }
};

int main(){
    string str;
    cout<<"Enter your string : ";
    cin>>str;
    stack a(str.size());

    if(a.palindrome(str)){
        cout<<"String is palindrome.."<<endl;
    }
    else{
        cout<<"String is not palindrome.."<<endl;
    }
    return 0;
}