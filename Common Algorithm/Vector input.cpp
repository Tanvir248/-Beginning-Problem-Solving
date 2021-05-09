#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int input;
  int n; 
  cout<<"Enter your number of item: ";
  cin>>n;
  cout<<"Enter your number: ";

  vector<int > myVector;//it's a array

  for(int i=0; i<n; i++){
    cin>>input;    //this is input method.
    myVector.push_back(input);//here i push back my vector
    
  }
  cout << "Size: " << myVector.size() << "\n";
  //reverse(myVector.begin(), myVector.end());
  //sort(myVector.begin(), myVector.end());
  //myVector.erase(myVector.begin()+2);//erese vector data
  for(int i=0; i<myVector.size(); i++){//this for print vector loop
    cout<<myVector[i]<<" ";//print vector data
  }
  
  return 0;
}
