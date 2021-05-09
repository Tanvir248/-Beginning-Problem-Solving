#include<iostream>
using namespace std;
int main()
{
    int n, count=0, i;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }for(i=0; i<n; i++){
        if(a[i]==1){count = 1;}
    }if(count == 1 ){cout<<"HARD"<<endl;}
    else
        cout<<"EASY"<<endl;
    return 0;
}


