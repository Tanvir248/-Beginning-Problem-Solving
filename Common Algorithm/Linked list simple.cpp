#include<iostream>
using namespace std;
struct Node{
  int data;
  struct Node *next;
};

void printList(struct Node *a){
     while (a!=NULL){
    cout<<a->data<<"->";
    a = a->next;
  }
  cout<<endl;
}

int main(){

  struct Node *a= NULL;
  struct Node *b= NULL;
  struct Node *c= NULL;


  a= (struct Node *) malloc (sizeof(struct Node));
  b= (struct Node *) malloc (sizeof(struct Node));
  c= (struct Node *) malloc (sizeof(struct Node));
  
  
  a->data = 10;
  b->data = 20;
  c->data = 30;


  a->next = b; //here a link with b next
  b->next = c;// here b link with c next
  c->next = NULL;// c next is null
 struct Node *start = a;
  
  printList(start); //here I call the function for tree

return 0;
}
