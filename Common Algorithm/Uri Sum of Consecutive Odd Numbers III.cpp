#include <iostream>
using namespace std; 
void SumofOddNumbers(int n){
  int number1,number2,i,j;
    
    while (n--){
      int sum =0;
     cin>>number1>>number2;
        for(i=number1;i<number1+(number2*2);i++){
            if(i%2!=0){
                sum+=i;
            }
        }
     cout<<sum<<endl;
    }
}
 
int main()
{
  int t;
  cin>>t;
    SumofOddNumbers(t);
    return 0;
}