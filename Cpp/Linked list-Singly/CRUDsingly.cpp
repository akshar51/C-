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
    node *head;
    int count;
    linkedlist(int data){
        this->head=NULL;
        this->count=0;
    }

    void addAtbegin(){

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