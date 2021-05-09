#include<iostream>
using namespace std;
void reverseArray(int arr[],int size){
  int i, j;
  for(j = size-1; j>=0; j--)
  cout<<arr[j]<<" ";
}
int main(){
  int array[1001];
  int n, i;
  cin>>n;
  for( i =0; i<n ; i++)
    cin>>array[i];
  
  reverseArray(array, n);
}