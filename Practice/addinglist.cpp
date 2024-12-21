#include<iostream>
using namespace std;


// ADDING NODE 

class node{
    public:
    int data;
    node* next;

    node(int value){
        data=value;
        next=NULL;
    }
};
   
node* createlink(int ar[],int index,int size){
    if(index==size){
        return NULL;
    }
    node* temp;
    temp=new node(ar[index]);
    temp->next=createlink(ar,index+1,size);
    return temp;
}

int main(){
    node *head=NULL;
    int ar[]={2,4,6};
    head=createlink(ar,0,3);

    node *print=head;
    while(print!=NULL){
        cout<<print->data<<endl;
        print=print->next;
    }
}