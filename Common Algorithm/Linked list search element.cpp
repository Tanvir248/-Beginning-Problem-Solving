#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
    struct Node *CreateLinkedlist(int arr[], int size){
        struct Node *head = NULL, *temp= NULL , *current= NULL;
        int i;
        for(i=0; i<size; i++){
            temp = (struct Node *) malloc(sizeof(struct Node));
            temp ->data = arr[i];
            temp -> next = NULL;
            if(head == NULL){
                head = temp;
                current = temp;
            }
            else{
                current->next = temp; 
                current = current->next;
            }
        } 
        return head;
    }
    // int searchinlist(struct Node *head){
    //     int value;
    //     cout<<"Enter a item for search: ";
    //     cin>>value;
    //     int item =1;
    //     while(head != NULL){
    //     if(head->data == value){
    //         return item;
    //     }
    //     item++;
    //     head = head -> next;
	// 	}
	
	// cout<<"Item Not Found!"<<endl;
        
    // }
    void insertNode(struct Node *head, int data){
        struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = head;
            struct Node *newHead = temp;
            while(newHead !=NULL){
                cout<<newHead->data<<"->";
                newHead = newHead->next;
            }
            cout<<"NULL"<<endl;
    }
    void printlist(struct Node *head){

    
    cout<<"The listed data is : ";
        while(head != NULL){
            cout<<head->data<<"->";
            head = head->next;
        }
        cout<<"NULL"<<endl;
    }
int main()
{ 
     int size, array[]= {10, 20, 30, 400, 50 , 60 ,70};
     
     size=sizeof(array)/sizeof(array[0]);
     
        for(int i=0; i<size; i++){
            array[size]=array[i];
        }
        struct Node *head;
    head = CreateLinkedlist(array, size);
	
    printlist(head);
   //int x=searchinlist(head);

   cout<<"Number Found! Your Item Position is: "<<x<<endl;

    return 0;
}