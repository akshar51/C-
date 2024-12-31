#include<iostream>
#define MAX 100
using namespace std;

class stack{
    int top;
    int* ar;
    int size;

    public:

    stack(int size){
        this->top=-1;
        this->size=size;
        ar=new int[size];
    }

    void push(int ele){
        if(top==size-1){
            cout<<"Stack overflow.."<<endl;
            return;
        }
        else{
            top++;
            ar[top]=ele;
        }
    }

    int pop(){
        if(top==-1){
            cout<<"Stack underflow.."<<endl;
            return -1;
        }
        else{
            return ar[top--];
        }
    }

    void display(){
        if(top==-1){
            cout<<"Stack is empty.."<<endl;
            return;
        }
        else{
            for(int i=top;i>=0;i--){
                cout<<ar[i];
            }
        }
    }
};

int main(){
    stack a(MAX);
    int num;
    cout<<"Enter number : ";
    cin>>num;

    while(num!=0){
        a.push(num%2);
        num=num/2;
    }
    a.display();
    return 0;
}