#include<iostream>
#include<string>
using namespace std;

class stack{
  int* ar;
  int top;
  int size;

  public:
  stack(int size){
    this->top=-1;
    ar=new int[size];
    this->size=size;
  }

  void push(char ch){
    if(this->top==this->size-1){
        cout<<"Stack overflow.."<<endl;
    }
    else{
        top++;
        ar[top]=ch;
    }
  }

  char pop(){
    if(top==-1){
        cout<<"Stack underflow.."<<endl;
    }
    else{
        return ar[top--];
    }
  }

  bool palindrome(string str){
    for(char ch:str){
        push(ch);
    }
    for(char a:str){
        if(pop()!=a){
            return false;
        }
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