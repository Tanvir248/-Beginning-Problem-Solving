#include<iostream>
using namespace std;
int Matrix(int size){
  int i, j;
  int sum1=0, sum2=0;
  int arr[size][size];
  for ( i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
            if (i == j) sum1 += arr[i][j];
            if (i == size - j - 1) sum2 += arr[i][j];
        }
    }
  return abs(sum1 - sum2); 
  
}
int main(){
  int n;
  cin>>n;
  int x= Matrix(n);
  cout<<x<<endl;
return 0;
}