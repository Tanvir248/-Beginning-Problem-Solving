#include<iostream>
using namespace std;
int main(){
  int arr[]= {2, 4, 6, 8, 12, 14, 16, 87};
  int searchItem = 8;
  int left =0, right = 7;
  int middle = (left+ right) /2;
   while(left<= right){
   
   if(arr[middle]== searchItem){
     cout<<"Iteam Found at "<<middle+1<<endl;
     return 0;
   }    
   else if(arr[middle]< searchItem ){
     left = middle +1;
   }
   else 
   right = middle -1;
   }
   cout<<"Iteam not found"<<endl;
   return 0;
}