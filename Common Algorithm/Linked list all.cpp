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
     int searchinlist(struct Node *head){
         int value;
         cout<<"Enter a item for search: ";
         cin>>value;
         int item =1;
         while(head != NULL){
         if(head->data == value){
             return item;
         }
         item++;
         head = head -> next;
	 	}
	
	 cout<<"Item Not Found!"<<endl;
        
     }
    void insertNodeatBegining(struct Node *head, int data){
        struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = head;
            struct Node *newHead = temp;
            cout<<"Insert at begining: ";
            while(newHead !=NULL){
                cout<<newHead->data<<"->";
                newHead = newHead->next;
            }
            cout<<"NULL"<<endl;
    }
    void insert(struct Node *head, int position, int value){
        struct Node *temp = head;
        int counter =0;
        while(temp != NULL){
                counter++;
                if(counter == position){
                    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));

                    newNode ->data = value;

                    newNode ->next = temp->next;
                    
                    temp ->next = newNode;
                }
                temp = temp->next;
        }
        struct Node *print = head;
        cout<<"Inserted Node: ";
        while (print != NULL)
        {
            cout<<print->data<<"->";
            print = print->next;
        }
        cout<<"NULL"<<endl;
        
    }
    struct Node *DeleteNode(struct Node *head, int item){
        struct Node *newHead = (struct Node *) malloc(sizeof(struct Node));
        newHead->next = head;
            struct Node *temp = newHead;
            while(temp != NULL){
                if(temp->next->data == item)
                {
                    temp->next = temp->next->next;
                }else {
                    temp = temp->next;
                }
            }
            newHead = newHead->next;
            cout<<"Deleted list is: ";
        while(newHead != 0){
            cout<<newHead->next<<"->";
            newHead= newHead->next;
        }
        cout<<endl;
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

    int number;
    cin>>number;

    insertNodeatBegining(head, number);

    insert(head, 5, number);

   int x=searchinlist(head);

   cout<<"Number Found! Your Item Position is: "<<x<<endl;
    DeleteNode(head, 400);
    return 0;
}