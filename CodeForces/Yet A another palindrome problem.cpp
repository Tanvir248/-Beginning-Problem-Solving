#include <iostream>
using namespace std;
int main()
{
    int t, a,n;
    cin>>t;
    while(t--){
        int i, j;
        cin>>n;
        a=0;
        int arr[n];
        for(i=0; i<n; i++){
            cin>>arr[i];
        }
        for(i=0; i<n; i++){
            for( j = i+2; j<n; j++){
                if(arr[i]==arr[j]){
                    a = 1;
                    break;
                }
            }
            if(a==1){
                break;
            }
    }
    if(a !=1){
        cout<<"NO"<<endl;
        
    }
    else
    {
        cout<<"YES"<<endl;
        
    }
    }
    return 0;
}
