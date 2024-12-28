#include<iostream>
using namespace std;


// OPERATION OF STACK

class Stack{
    private:
    int* arr;
    int capacity;
    int top;
    int count;

    public:
    // CONSTRUCTOR
    Stack(int capacity){
        this->capacity=capacity;
        arr=new int[capacity];
        this->top=-1;
        this->count=0;
    }

    // PUSHING (ADD AN ELEMENT AT TOP OF STACK)
    void push(int ele){
        if(this->top==this->capacity-1){
            cout<<"Stack overflow.."<<endl;
        }
        else{
            this->top++;
            arr[top]=ele;
            this->count++;
        }
    }

    // POPPING (REMOVE ELEMENT AT TOP OF STACK)
    void pop(){
        if(this->top==-1){
            cout<<"Stack underflow."<<endl;
        }
        else{
            this->top--;
            this->count--;
        }
    }

    // PEEK (GIVES TOP ELEMENT)
    void peek(){
        if(this->top==-1){
            cout<<"Stack underflow"<<endl;
        }
        else{
            cout<<arr[this->top];
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

    // EMPTY (CHECK STACK HAS ANY ELEMENT OR NOT)
    void empty(){
        if(this->top==-1){
            cout<<"Stack is empty."<<endl;
        }
        else{
            cout<<"Stack is NOT empty."<<endl;
        }
    }

    // FULL (CHECK STACK IS FULL OR NOT)
    void full(){
        if(this->top==this->capacity-1){
            cout<<"Stack is full."<<endl;
        }
        else{
            cout<<"Stack is not full."<<endl;
        }
    }


    // SIZE (GIVES SIZE OF STACK)
    void size(){
        cout<<"Size of stack is "<<this->count<<endl;
    }

    
    //DESTRUCTOR
    ~Stack(){
        delete[] arr;
        cout<<"Memory deallocation successfull...."<<endl;
    }
};


int main(){

    Stack a(4);
    int choice,ele;
    do{
        cout<<"Press 1 for push."<<endl;
        cout<<"Press 2 for pop."<<endl;
        cout<<"Press 3 for peek."<<endl;
        cout<<"Press 4 for empty."<<endl;
        cout<<"Press 5 for full."<<endl;
        cout<<"Press 6 for size."<<endl;
        cout<<"Press 7 for display."<<endl;
        cout<<"Press 0 for exit."<<endl<<endl;

        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"Enter element : ";
            cin>>ele;
            a.push(ele);
            cout<<endl;
            break;

            case 2:
            a.pop();
            cout<<endl;
            break;

            case 3:
            a.peek();
            cout<<endl;
            break;

            case 4:
            a.empty();
            cout<<endl;
            break;

            case 5:
            a.full();
            cout<<endl;
            break;

            case 6:
            a.size();
            cout<<endl;
            break;

            case 7:
            a.display();
            cout<<endl;
            break;

            case 0:
            break;

            default:
            cout<<"Invalid choice...."<<endl;
            break;
        }
    }while(choice!=0);
}