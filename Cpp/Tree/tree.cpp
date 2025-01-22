#include<iostream>
using namespace std;

class Node{
    public:
    char data;
    Node* left;
    Node* right;
};

int main(){
    
    Node* root=new Node;
    Node* node1=new Node;
    Node* node2=new Node;

    root->data='A';
    root->left=node1;
    root->right=node2;

    node1->data='B';
    node1->left=nullptr;
    node1->right=nullptr;
     
    node2->data='C';
    node2->left=nullptr;
    node2->right=nullptr;
     
    cout<<root->left<<"-"<<root->data<<"-"<<root->right<<endl;
    cout<<node1->left<<"-"<<node1->data<<"-"<<node1->right<<endl;
    cout<<node2->left<<"-"<<node2->data<<"-"<<node2->right<<endl;

    

    return 0;
}