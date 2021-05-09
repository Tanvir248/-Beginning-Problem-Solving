//Sequence of Numbers and Sum
#include<iostream>
#include<cstdio>
using namespace std;
void SuquenceNumberOfSum(int number1,int number2)
{
int i, sum = 0;
if(number2< number1){
for(i=number2; i<= number1; i++){
  sum += i;
  cout<<i<<" ";
  
}
  cout<<"Sum="<<sum<<endl;
}
  else if(number1<number2){
      for(i=number1; i<= number2; i++){
  sum += i;
  cout<<i<<" ";
  
}
  cout<<"Sum="<<sum<<endl;
}
  }

int main(){
int size, size1;

cin>>size>>size1;

SuquenceNumberOfSum(size, size1);

}