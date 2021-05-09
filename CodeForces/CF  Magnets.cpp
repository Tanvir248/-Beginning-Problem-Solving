#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

void solve(){
  int count =0,count1 =0, count2 =0;
  int n, num;
  cin>>n;
  vector<int> graph;
  for(int i=0; i<n; i++){
    cin>>num;
    graph.push_back(num);
  }
  for(int i=0; i<n; i++){
    if(graph[i]!= graph[i+1]){
      count++;
    }
  }cout<<count<<endl;
}
int main(){
   solve();
}