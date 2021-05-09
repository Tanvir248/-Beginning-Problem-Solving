#include<iostream>
using namespace std;
int factorial(int n){
    //cin>>n;
    if(n== 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
     int x=factorial(n);
    cout<<x<<endl;
}
