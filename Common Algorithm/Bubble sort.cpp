#include <iostream>
using namespace std;
int temp=0;
int main()
{
    int n, i, j, number[100];
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>number[i];
    for(i=1; i<=n; i++){ // loop for work with number[i]
        for(j=1; j<n; j++){ //
            if(number[j+1]>number[j]){
                temp = number[j];
                number[j]= number[j+1];
                number[j+1] = temp;
            }
        }
    }
    for(i=1; i<=n; i++)
        cout<<number[i]<<" ";
    return 0;
}

