#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;
using std::pow;
using namespace std;

// Function for counting total quantity of 1 in binary
int OneCount(int n){
    int count=0;
    while(n!=0){
        if(n%2==1){
            count++;
        }
        n /= 2;
       // cout<<"N is"<<n<<endl;
    }
    
    //here I return count
    return count;
    
}

int main(){
    
    int n, sum=0;
    cin>>n;
    
    // converting "111111" formatted binary to decimal
    for(int i=0; i<OneCount(n); i++){
        //here i<Onecount(n) , that n value I call from
        //onecount function
        sum += pow(2, i);
    }
    
    cout<<sum<<endl;
    
    return 0;
}
