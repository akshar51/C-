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
     
    node1->data='C';
    node1->left=nullptr;
    node1->right=nullptr;
     

     
}