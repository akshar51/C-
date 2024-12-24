#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int value){
        data=value;
        next=NULL;
    }
};

class linkedlist{
    public:
    node *head;
    int count;

    linkedlist(){
        this->head=NULL;
        this->count=0;
    }

    void addAtbegin(int ele){
        node* newnode=new node(ele);
        newnode->next=this->head;
        this->head=newnode;
        this->count++;
    }

    void addAtend(int ele){
        node* newnode= new node(ele);
        if(this->head==NULL){
            this->head=newnode;
        }
        else{
            node* ptr=this->head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=newnode;
            this->count++;
        }
    }

    void addAtposition(int ele,int position){
        node* newnode= new node(ele);
        if(position==0){
            newnode->next=NULL;
            this->head=newnode;
        }
        else{
            node* ptr=this->head;
            for(int i=1;i<position-1;i++){
                ptr=ptr->next;
            }
            newnode->next=ptr->next;
            ptr->next=newnode;
            this->count++;
        }
    }

    void show(){
        node* ptr=head;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
};

int main(){
    linkedlist a;
    int choice,ele,pos;

    do{
        cout<<"Press 1 for adding a node at beginning."<<endl;
        cout<<"Press 2 for adding a node at end."<<endl;
        cout<<"Press 3 for adding a node at particular position."<<endl;
        cout<<"Press 4 for display element."<<endl;
        cout<<"Press 0 for exit."<<endl;

        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"Enter your element : ";
            cin>>ele;
            cout<<endl;
            a.addAtbegin(ele);
            cout<<"Element added at beginning successfully..."<<endl<<endl;
            break;

            case 2:
            cout<<"Enter your element : ";
            cin>>ele;
            cout<<endl;
            a.addAtend(ele);
            cout<<"Element added at end successfully..."<<endl<<endl;
            break;

            case 3:
            cout<<"Enter your element : ";
            cin>>ele;
            cout<<"Enter your position : ";
            cin>>pos;
            cout<<endl;
            a.addAtposition(ele,pos);
            cout<<"Element added at position successfully..."<<endl<<endl;
            break;

            case 4:
            a.show();
            cout<<endl;
            break;

            case 0:
            break;

            default:
            cout<<"Enter valid choice....."<<endl<<endl;
            break;
        }
    }while(choice!=0);

}