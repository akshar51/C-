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
            for(int i=1;i<position;i++){
                ptr=ptr->next;
            }
            newnode->next=ptr->next;
            ptr->next=newnode;
            this->count++;
        }
    }

    void show(){

    }
};

int main(){
    linkedlist a;

}