#include<iostream>
using namespace std;
int main(){
  long long int number, reminder, reverse=0;
  cin>>number;
  while (number!=0)
  {
      reminder = number%10;
      reverse = 10*reverse +reminder;
      number=number/10;
  }
  cout<<reverse<<endl;
}