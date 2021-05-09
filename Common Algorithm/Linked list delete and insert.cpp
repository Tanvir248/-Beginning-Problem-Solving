#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

void deleteNode(Node *head, Node *n)
{
    
    Node *prev = head;
    while(prev->next != NULL && prev->next != n)
        prev = prev->next;
    
    prev->next = prev->next->next;
    
    free(n);
    
    return;
}
void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void printList(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    push(&head, 10);
    push(&head,3);
    push(&head,2);
    push(&head,6);
    push(&head,5);
    push(&head,11);
    push(&head,10);
    push(&head,15);
    push(&head,12);
    cout<<"Given Linked List: ";
    printList(head);
    cout<<"\n Inserting node: "<< head->next->next->data<<" ";
    
    
    
    cout<<"\nDeleting Dublicate node ->";
    deleteNode(head, head->next->next->next);
    
    cout<<"\nModified Linked List: ";
    printList(head);
    return 0;
}
