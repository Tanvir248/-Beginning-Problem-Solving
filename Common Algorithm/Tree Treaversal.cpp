#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *leftChild;
    struct Node *rightChild;
    Node(int number){
        this->data = number;
        leftChild= rightChild = NULL;
    }
};
void preorder(struct Node *root){
    if(root == NULL)
    //cout<<"This tree is NULL"<<endl;
    return;
    else{
        cout<<root->data<<" ";
        preorder(root->leftChild);
        preorder(root->rightChild);
    }
}
void inorder(struct Node *root){
    if(root== NULL)
    return;
    else{
        inorder(root->leftChild);
        cout<<root->data<<" ";
        inorder(root->rightChild);

    }
}
void postorder(struct Node *root){
    if(root == NULL)
    return;
    else{
        postorder(root->leftChild);
        postorder(root->rightChild);
        cout<<root->data<<" ";
    }
}
int main(){

    struct Node *root = (struct Node *) malloc(sizeof(struct Node));
    root =                                     new Node(2);
    root->leftChild =                          new Node(7);
    root->leftChild->leftChild =               new Node(2);
    root->leftChild->rightChild =              new Node(6);
    root->leftChild->rightChild->leftChild =   new Node(5);
    root->leftChild->rightChild->rightChild =  new Node(11);
    root->rightChild =                         new Node(5);
    root->rightChild->rightChild =             new Node(9);
    root->rightChild->rightChild->leftChild =  new Node(4);
    
    cout<<"Inorder Traversal is: ";
    inorder(root);
    cout<<endl;
    cout<<"preorder traversal is:";
    preorder(root);
    cout<<endl;
    cout<<"Postorde Traversal is: ";
    postorder(root);
    cout<<endl;
}