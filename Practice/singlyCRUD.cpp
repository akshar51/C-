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

    // ADD AN ELEMENT
    void addbegin(int ele){
        node*temp=new node(ele);
        temp->next=head;
        head=temp;
        this->count++;
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

    void addtopos(int index,int ele){
       node* temp=new node(ele);
       if(index==0){
        temp->next=NULL;
        this->head=temp;
       }
       else{
        node* ptr=this->head;
        node* curr=temp;
        for(int i=1;i<index-1;i++){
            ptr=ptr->next;
        }
        curr->next=ptr->next;
        ptr->next=curr;
        this->count++;
       }
    }


    // UPDATE
    void update(int index,int ele){
        node* temp=new node(ele);
        if(index<=0 || index>this->count){
            cout<<"Invalid index value...";
        }
        else{
            node* ptr=head;
            for(int i=1;i<index;i++){
                ptr=ptr->next;
            }
            ptr->data=ele;
        }
    }

    // DELETE

    void deletestart(){
        if(this->head==NULL || this->count==0){
            cout<<"List is empty...";
            return;
        }
        else{
            node* temp=this->head;
            this->head=temp->next;
            delete temp;
            temp=NULL;
        }
    }

    void deleteend(){
        if(this->head==NULL || this->count==0){
            cout<<"List is empty...";
            return;
        }
        else{
            node* temp=this->head;
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            delete temp->next;
            temp->next=NULL;

        }
    }

    void deletePos(int index){
        if(this->head==NULL || this->count==0){
            cout<<"List is empty...";
            return;
        }
        else{
            node* prev=this->head;
            node* temp=this->head;
            for(int i=1;i<index;i++){
                temp=temp->next;
            }
            for(int i=1;i<index-1;i++){
                prev=prev->next;
            }
            prev->next=temp->next;
            delete temp;
            temp=NULL;
            this->count--;
        }
    }


    // SHOW
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
        cout<<"Press 3 for add an element at any position."<<endl;
        cout<<"Press 4 for update an element."<<endl;
        cout<<"Press 5 for delete an element at start."<<endl;
        cout<<"Press 6 for delete an element at end."<<endl;
        cout<<"Press 7 for delete an element at any position."<<endl;
        cout<<"Press 8 for display all element."<<endl;
        cout<<"Press 0 for exit."<<endl;

        
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"Enter your element : ";
            cin>>ele;
            cout<<endl;
            a.addbegin(ele);
            cout<<"Element added successfully...."<<endl;
            break;

            case 2:
            cout<<"Enter your element : ";
            cin>>ele;
            cout<<endl;
            a.addend(ele);
            cout<<"Element added successfully...."<<endl;
            break;

            case 3:
            cout<<"Enter position value : ";
            cin>>pos;
            cout<<"Enter your element : ";
            cin>>ele;
            cout<<endl;
            a.addtopos(pos,ele);
            cout<<"Element added successfully...."<<endl;
            break;

            case 4:
            cout<<"Enter position value : ";
            cin>>pos;
            cout<<"Enter your element : ";
            cin>>ele;
            cout<<endl;
            a.update(pos,ele);
            break;

            case 5:
            cout<<endl;
            a.deletestart();
             cout<<"Element deleted successfully...."<<endl;
            break;

            case 6:
            cout<<endl;
            a.deleteend();
            cout<<"Element deleted successfully...."<<endl;
            break;

            case 7:
            cout<<"Enter position value : ";
            cin>>pos;
            cout<<endl;
            a.deletePos(pos);
            cout<<"Element deleted successfully...."<<endl;
            break;

            case 8:
            a.show();
            cout<<endl;
            break;

            case 0:
            break;

            default:
            cout<<"Invalid choice...."<<endl;
            break;
        }
    }while(choice!=0);

}