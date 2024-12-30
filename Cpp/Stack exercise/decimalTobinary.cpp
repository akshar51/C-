#include<iostream>
#define MAX 100
using namespace std;


class Stack{
    private:
    int* arr;
    int capacity;
    int top;
    

    public:
    // CONSTRUCTOR
    Stack(int capacity){
        this->capacity=capacity;
        arr=new int[capacity];
        this->top=-1;
    }

    // PUSHING (ADD AN ELEMENT AT TOP OF STACK)
    void push(int ele){
        if(this->top==this->capacity-1){
            cout<<"Stack overflow.."<<endl;
        }
        else{
            this->top++;
            arr[top]=ele;
        }
    }

    // POPPING (REMOVE ELEMENT AT TOP OF STACK)
    int pop(){
        if(this->top==-1){
            cout<<"Stack underflow."<<endl;
            return -1;
        }
        else{
            this->top--;
            return this->arr[this->top];
        }
    }

    // // PEEK (GIVES TOP ELEMENT)
    // void peek(){
    //     if(this->top==-1){
    //         cout<<"Stack underflow"<<endl;
    //     }
    //     else{
    //         cout<<arr[this->top];
    //     }
    // }

    // EMPTY
    bool isEmpty(){
        if(this->top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if(this->top==this->capacity-1){
            return true;
        }
        else{
            return false;
        }
    }

    // DISPLAY
    void display(){
        if(this->top==-1){
            cout<<"Stack underflow"<<endl;
        }
        else{
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }
        }
    }
};



int main(){
    int num;
    cout<<"Enter your number : ";
    cin>>num;

    Stack a(MAX);

    while(num!=0){
        a.push(num%2);
        num=num/2;
    }

    a.display();
}