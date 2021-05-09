#include<iostream>
#include<stdbool.h>
using namespace std;
#define SIZE 5
int Queue[SIZE];
int front =0; 
int rear = -1;
int totalItem =0; 
bool isFull(){
  if(totalItem == SIZE){
    return true;
    
  }
  return false;
}
bool isEmpty(){
  if(totalItem == 0){
    return true;
  }
  else
  return false;
}
void enqueue(int value){
  if(isFull()){
    cout<<"This Queue is full"<<endl;
    return;
  }
  rear= (rear+1)%SIZE;
  Queue[rear]= value;
  totalItem++;
}
int dequqeue(){
  if(isEmpty()){
    cout<<"This Queue is empty"<<endl;
    return 0;
  }
  int value;
  value= Queue[front];
  front = (front+1)%SIZE;
 
  totalItem--;
          return front; 
}
void printValue(){
  int i;
  for(i=0; i<SIZE; i++){
  cout<<Queue[i]<<" ";
}
  cout<<endl;
}
int main(){
  printValue();
  dequqeue();
  enqueue(10);
  printValue();
  enqueue(20);
  enqueue(30);
  dequqeue();
  enqueue(40);
  enqueue(50);
  enqueue(60);
  printValue();
  printValue();
  printValue();
}