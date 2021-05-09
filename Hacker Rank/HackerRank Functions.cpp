#include<iostream>
using namespace std;
int FindBigger(int x, int y, int z, int s){
  if(x>y && x>z && x> s)
  return x;
  else if(y> x && y> z && y > s)
  return y;
  else if(z >x && z> y && z > s)
  return z;
  else return s;

}
int main(){
  int a, b, c, d;
  cin>>a>>b>>c>>d;
  int bigValue = FindBigger(a , b, c, d);
  cout<<bigValue<<endl;
}