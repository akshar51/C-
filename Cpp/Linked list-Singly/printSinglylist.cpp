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
    head->data=50;
    head->next=NULL;
    head->next=curr;

    curr=new Node();
    head->data=75;
    head->next=NULL;
    head->next->next=curr;

    
    while(ptr!=NULL){
        cout<<"Data is : "<<ptr->data<<" "<<endl;
        ptr=ptr->next;
    }
    
}