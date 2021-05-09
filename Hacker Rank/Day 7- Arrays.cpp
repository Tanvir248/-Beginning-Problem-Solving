#include <iostream>
using namespace std;
int main()
{
    int arr[10001];
    int t,i;
    cin>>t;
    for( i=0; i<t; i++){
        cin>>arr[i];
    }
    for(i = t-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
