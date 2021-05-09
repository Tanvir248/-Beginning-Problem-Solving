#include<iostream>
using namespace std;
int simplesum(int a,int b,int t)
{
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<< a+b <<endl;
    }
}
int main()
{
    int a, b, t;
    
    simplesum(a, b, t);
    return 0;
}

