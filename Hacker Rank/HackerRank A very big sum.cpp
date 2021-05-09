#include<iostream>
using namespace std;
#define SIZE 1000000001
void aVeryBigSum(){
    int  n;
    long long int i,  arr, sum=0;
    cin>>n;
    for(i=0; i<n; i++){
      cin>>arr;
      sum += arr;
    }
    cout<<sum<<endl;
    }
int main(){

  aVeryBigSum();

    return 0;
}