#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[101], i, count=0, value=0;
    int n;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>arr[i];}
            for(i=0; i<n; i++){
                value +=arr[i];
                //count++;
            }
    
    if(value %2==0){
    value =(value/2)-1;
        cout<<value<<endl;
        
    }
    else if(value%2 !=0){
        value /=2;
        cout<<value<<endl;
    }

    return 0;
    }
