#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int key;
    struct Node *leftChild;
    struct Node *rightChild;
};
struct Node *newNode(int data){
            struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
            temp->key = data;
            temp->leftChild = NULL;
            temp->rightChild = NULL;

            return temp;
    }
void inorder(struct Node *root){
    if(root == NULL)
    return;
    else{
        inorder(root->leftChild);
        cout<<root->key<<" ";
        inorder(root->rightChild);
    }

}
struct Node *insertTree(struct Node *node, int data){
    if(node == NULL)
    return newNode(data);
    if(data<node->key){
        node->leftChild = insertTree(node->leftChild, data);
    }
    else if(data>node->key ){
        node ->rightChild = insertTree(node->rightChild, data);
    }
    return node;
}
struct Node *searchTree(struct Node *root, int data){
    if(root == NULL || root->key == data)
    return root;
    else if(root->key<data){
        return searchTree(root->rightChild, data);
    }
    else if(root->key>data){
        return searchTree(root->leftChild, data);
    }
}
int main(){
    struct Node *root = NULL;
   // root = (struct Node *) malloc(sizeof(struct Node));
    root = insertTree(root, 8);
        insertTree(root, 1);
        insertTree(root, 3);
        insertTree(root, 6);
        insertTree(root, 7);
        insertTree(root, 4);
        insertTree(root, 10);
        insertTree(root, 14);
        insertTree(root, 13);

        inorder(root);
        cout<<"search iteam is: ";
        struct Node *x = searchTree(root, 6);
        cout<<x<<endl;
    return 0;
}
