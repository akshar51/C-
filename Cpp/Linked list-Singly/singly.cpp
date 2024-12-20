#include<iostream>
using namespace std;

class a{
    public:
    int data;
    a *next;
};



int main(){
    

    // STATIC WAY TO INITIALIZE LINKED LIST
    
    a *head=NULL;
    head=new a();
    head->data=25;
    head->next=NULL;

    a *n2=new a();
    n2->data=50;
    n2->next=NULL;
    head->next=n2;

    a *n3=new a();
    n3->data=75;
    n3->next=NULL;
    n2->next=n3;

    a *temp=head;


    cout<<"Address of head is "<<temp<<endl<<endl;
    cout<<"Data of node 1 is "<<head->data<<endl;
    cout<<"Address of node 1 is "<<head->next<<endl<<endl;
    cout<<"Data of node 2 is "<<n2->data<<endl;
    cout<<"Address of node 2 is "<<n2->next<<endl<<endl;
    cout<<"Data of node 3 is "<<n3->data<<endl;
    cout<<"Address of node 3 is "<<n3->next<<endl<<endl;
    cout<<temp<<endl;// HEAD ADDRESS
    cout<<head<<endl;// NODE 1 ADDRESS
    cout<<n2<<endl;// NODE 2 ADDRESS
    cout<<n3<<endl;// NODE 3 ADDRESS
    

}