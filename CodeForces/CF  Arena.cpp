#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
  int n, heros=0,num;
  vector<int> wins;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>num;
    wins.push_back(num);
  }
  sort(wins.begin(), wins.end());
  for(int i=0; i<n; i++){
  
    if( wins[i+1]>wins[i]){
      
    wins[i+1] = wins[i+1]+1;
   // heros1++;
    }
    
  }
  sort(wins.begin(), wins.end());
  for(int i=0; i<n; i++){
    //cout<<wins[i]<<" ";
    if(wins[i]>wins[i+1])
            break;
     else if(wins[i]>wins[i+1]){
      wins[i] = wins[i]+1;
     // heros2++;
    }
  }
  sort(wins.begin(), wins.end());
  for(int i=0; i<n; i++){
 // cout<<wins[i]<<" ";
    if( wins[i+1]>wins[i]){
    heros++;
    }
    
  }
  //cout<<heros<<endl;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}