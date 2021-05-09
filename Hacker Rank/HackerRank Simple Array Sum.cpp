#include<iostream>
using namespace std;
void simpleArraySum(){
  int arr[1001];
  int n, i,sum=0;
  cin>>n;
  for(i=0; i<n; i++){
    cin>>arr[i];
    sum += arr[i];
  }
  cout<<sum<<endl;
}
int main(){
  simpleArraySum();
  return 0;
}