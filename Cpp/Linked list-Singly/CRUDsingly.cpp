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
        newnode->next=head;
    }

    void addAtend(){

    }

    void addAtposition(){

    }

    void show(){

    }
};

int main(){
    linkedlist a;

}