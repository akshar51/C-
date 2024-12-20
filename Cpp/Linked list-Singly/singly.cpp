#include<iostream>
using namespace std;

class a{
    public:
    int data;
    a *next;
};



int main(){
    
    a *head=NULL;
    head=new a();
    head->data=25;
    head->next=NULL;

    a *n2=new a();
    n2->data=50;
    n2->next=NULL;


}