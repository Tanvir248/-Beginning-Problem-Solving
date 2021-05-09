#include<iostream>
using namespace std;
int main()
{
    int n, i, j, number[100];
    cin>>n;
    for(i=1; i<=n ; i++)
        cin>>number[i];
    for(i=1; i<=n ; i++){
        for(j= i+1; j<=n; j++){
            if(number[i]>number[j]){
                swap(number[i], number[j]);
            }
        }
    }
    for(i=1; i<=n ; i++)
        cout<<number[i]<<" ";
}
