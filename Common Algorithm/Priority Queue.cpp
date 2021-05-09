#include<iostream>
#include<queue>
using namespace std;
void printQueue(priority_queue<int> myQueue){
    cout<<"The priority Queue is: ";
    while (!myQueue.empty())
    {
        cout<<myQueue.top()<<" ";
        myQueue.pop();
    }
}
int main(){
    priority_queue<int> myQueue;
    myQueue.push(30);
    myQueue.push(7);
    myQueue.pop();
    myQueue.push(10);
    
    myQueue.push(105);
    
    myQueue.push(81723482);
    

    printQueue(myQueue);

}