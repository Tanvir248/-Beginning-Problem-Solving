#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> MyStack;
    MyStack.push(90);
    MyStack.push(89);
    MyStack.push(34);
    MyStack.pop();
    while (!MyStack.empty())
    {
        cout<<MyStack.top()<<endl;
        MyStack.pop();
    }
  return 0;   
}