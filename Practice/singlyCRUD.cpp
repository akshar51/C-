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

class linklist{
    public:
    node* head;
    int count;

    linklist(){
        head=NULL;
        count=0;
    }

    void addbegin(int ele){
        node*temp=new node(ele);
        temp->next=head;
        head=temp;
        count++;
    }

    void addend(int ele){
        node* temp=new node(ele);
        if(this->head==NULL){
            this->head=temp;
        }
        else{
            node* ptr=this->head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=temp;
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
    linklist a;
    int choice,ele,pos;

    do{
        cout<<"Press 1 for add an element at begin."<<endl;
        cout<<"Press 2 for add an element at end."<<endl;
        cout<<"Press 8 for display all element."<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"Enter your element : ";
            cin>>ele;
            cout<<endl;
            a.addbegin(ele);
            break;

            case 2:
            cout<<"Enter your element : ";
            cin>>ele;
            cout<<endl;
            a.addend(ele);
            break;

            case 8:
            a.show();
            cout<<endl;
            break;
        }
    }while(choice!=0);

}