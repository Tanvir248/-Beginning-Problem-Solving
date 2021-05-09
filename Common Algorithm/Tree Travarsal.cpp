#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *lefthild;
    struct Node *rightChild;
};
    struct Node *root = NULL;
void insert(int data){
    struct Node *temp = NULL;
    temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *current;
    struct Node *parent;
    temp-> data = data;
    temp ->lefthild = NULL;
    temp -> rightChild = NULL;
    // if here tree is not empty
    if(root == NULL){
        root = temp;
    }
    else {
        current = root;
        parent = NULL;
        while(1){
            parent = current;
            //goto left of the tree
            if( data<parent ->data){
                current = current -> lefthild;
                //insert the lift
                if(current == NULL){
                    parent -> lefthild = temp;
                    return;
                }
            } else{
                current = current -> rightChild;
                //insert to the right
        if(current == NULL){
            parent -> rightChild = temp;
            return;
        }
            }
        }
    }

}
struct Node *search(int data){
    struct Node *current = root;
    cout<<"Visiting Elements: ";
    while(current ->data != data){
        if(current != NULL)
        cout<<current ->data;
        //goto left tree
        if(current -> data >data){
            current = current ->leftchild;
        }
        else{
            current = current -> rightChild;
        }
        if(current == NULL){return NULL;}
    }
}
void preorder_traversal(struct Node *root){
    if(root != NULL){
        cout<<root->data;
        preorder_traversal(root->lefthild);
        preorder_traversal(root->rightChild);
    }
}
void inorder_travarsal(struct Node *root){
    if(root != NULL){
        inorder_travarsal(root->lefthild);
        cout<<root->data;
        inorder_travarsal(root -> rightChild);
    }
}
void postorder_traversal(struct Node *root){
    if(root != NULL){
        postorder_traversal(root ->lefthild);
        postorder_traversal(root -> rightChild);
        postorder_traversal(root -> root->data);
        cout<<root->data;
    }
}
int main()
{
    
}