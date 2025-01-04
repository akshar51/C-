#include<iostream>
using namespace std;
//  OPERATION OF QUEUE
class Queue{
    int* ar;
    int front;
    int rear;
    int count;
    int size;

    public:
    Queue(int size){
        ar=new int[size];
        front=-1;
        rear=-1;
        count=0;
        this->size=size;
    }

    void push(int ele){
        if(rear==size-1){
            cout<<"Queue overflow.."<<endl;
        }
        else if(front==-1 && rear==-1){
            front=rear=0;
            ar[rear]=ele;
            count++;
        }
        else{
            rear++;
            ar[rear]=ele;
            count++;
        }
    }

    void pop(){
        if(front==-1 && rear==-1){
            cout<<"Queue underflow.."<<endl;
        }
        else if(front==rear){
            front=rear=-1;
            count--;
        }
        else{
            front++;
            count--;
        }
    }

    void getfront(){
        if(front==-1 && rear==-1){
            cout<<"Queue empty"<<endl;
        }
        else{
            cout<<ar[front]<<endl;
        }
    }

    void getrear(){
        if(front==-1 && rear==-1){
            cout<<"Queue empty.."<<endl;
        }
        else{
            cout<<ar[rear]<<endl;
        }
    }

    void getsize(){
        cout<<"Size of queue is : "<<count<<endl;
    }

    void display(){
        if(front==-1 && rear==-1){
            cout<<"Queue empty.."<<endl;
        }
        else{
            for(int i=front;i<=rear;i++){
                cout<<ar[i]<<" ";
            }
        }
    }

};

int main(){
    Queue q(5);
    int choice;

    do{
        cout<<"Press 1 for PUSH "<<endl;
        cout<<"Press 2 for POP "<<endl;
        cout<<"Press 3 for FRONT "<<endl;
        cout<<"Press 4 for REAR "<<endl;
        cout<<"Press 5 for SIZE "<<endl;
        cout<<"Press 6 for DISPLAY "<<endl;
        cout<<"Press 5 for EXIT "<<endl<<endl;

        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice){
            case 1:
            int ele;
            cout<<"Enter your element : ";
            cin>>ele;
            q.push(ele);
            cout<<endl;
            break;

            case 2:
            q.pop();
            cout<<endl;
            break;

            
            case 3:
            q.getfront();
            cout<<endl;
            break;

            
            case 4:
            q.getrear();
            cout<<endl;
            break;

            
            case 5:
            q.getsize();
            cout<<endl;
            break;

            
            case 6:
            q.display();
            cout<<endl;
            break;

            case 0:
            break;

            default:
            cout<<"Invalid choice....."<<endl;
            break;

        }


    }while(choice!=0);
    return 0;
}