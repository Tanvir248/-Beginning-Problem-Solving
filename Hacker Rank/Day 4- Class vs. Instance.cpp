#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--){
    cin>>n;
    if(n<=0){
        cout<<"Age is not valid, setting age to 0."<<endl<<"You are young."<<endl<<"You are young."<<endl;
    }
    else if(n<13){
        cout<<"You are young."<<endl<<"You are a teenager."<<endl;
    }
    else if(n>=13 && n<18){
        cout<<"You are a teenager."<<endl<<"You are old."<<endl;
    }
    else
        cout<<"You are old."<<endl<<"You are old."<<endl;
    }
    return 0;
}
