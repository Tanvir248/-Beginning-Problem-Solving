#include<iostream>
#include<queue>
using namespace std;
int PrintQueue(queue<int> MyQueue){
  while(!MyQueue.empty()){
  cout<<MyQueue.front()<<" ";
  MyQueue.pop();
}
cout<<endl;
return 0;
}
int main(){
queue<int> MyQueue;
MyQueue.push(10);
MyQueue.push(15);
MyQueue.push(11);
MyQueue.push(12);
PrintQueue(MyQueue);
}