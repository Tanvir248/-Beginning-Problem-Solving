#include<iostream>
using namespace std;
void deleteELement(int number, int array[]){
    int i, point;
    cout<<"Enter place to delete element: ";
   cin>>point;
   
   point = point-1;
   for(i=point; i<number; i++){
     array[i]= array[i+1];
   }
   cout<<"This deleted array is: ";
  for(i=0; i<number-1; i++){
    cout<<array[i]<<" ";
  }
}
int main(){
int i, arr[]={10, 20, 30, 40, 50, 60, 70, 80};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<"This element size is: "<<size<<endl;
cout<<"My present array is: ";
for(i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
deleteELement(size, arr);
cout<<endl;
}