#include<iostream>
using namespace std;
#define CAPACITY 10
int arr[CAPACITY][CAPACITY];
void printGraph(int arr[CAPACITY][CAPACITY], int n){
  for(int i=0; i<n; i++){
    cout<<"Row No: "<<i<<"       ";
    for(int j=0; j<n; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main(){
  int node, edge;
  cin>>node>>edge;
  for(int i=0; i<edge; i++){
    int u, v;
    cin>>u>>v;
    arr[u][v]=1;
    arr[v][u]=1;
  }
  printGraph(arr, node);
}