#include<iostream>
using namespace std;
int binarySearch(int arr[], int size,int firstnum,int lastnum, int searchNum){
  int mid;
  mid = (firstnum+lastnum)/2;
  if(lastnum>=1){
    if(arr[mid]==searchNum){
      return mid;
    }
    else if(arr[mid]>searchNum)
    return binarySearch(arr,size, firstnum, mid-1, searchNum );
    else if(arr[mid]<searchNum)
    return binarySearch(arr, size , mid+1, lastnum, searchNum);
  }
  return -1;
}
int main(){
  int arr[]= {10, 20, 30, 40, 50, 60, 70, 80};
  int size = sizeof(arr)/sizeof(arr[0]);
  int searchNumber = 100;
  int result = binarySearch(arr, size,0,size-1, searchNumber);
  if(result>0)
  cout<<"Number found at: "<<result+1<<endl;
  else 
    cout<<"Number not found."<<endl;
  return 0;
}