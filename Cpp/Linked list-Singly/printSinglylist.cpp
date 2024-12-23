#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    
};

int main(){
    Node *ptr=NULL;
    


    Node *head=new Node();
    head->data=25;
    head->next=NULL;
    ptr=head;
   
  
    Node *curr;
    curr=new Node();
    curr->data=50;
    curr->next=NULL;
    head->next=curr;

    curr=new Node();
    curr->data=75;
    curr->next=NULL;
    head->next->next=curr;

    
    while(ptr!=NULL){
        cout<<"Data is : "<<ptr->data<<" "<<endl;
        ptr=ptr->next;
    }
    
}