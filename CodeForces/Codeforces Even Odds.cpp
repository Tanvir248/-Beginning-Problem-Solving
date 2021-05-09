#include<iostream>
using namespace std;
int EvenOdds(long long int number1, long long int number2){
    if (number2 <= (number1 + 1) / 2){
        return number2 * 2 - 1;
    }
    else if (number2 >= (number1 + 1) / 2){
        return (number2 - (number1 + 1) / 2) * 2;
    }
  return 0;
}
int main(){
  long long int m, n;
  cin>>m>>n; 
  int display = EvenOdds(m, n);
  cout<<display<<endl;
  return 0;
}