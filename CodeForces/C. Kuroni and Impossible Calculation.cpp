C. Kuroni and Impossible Calculation

#include <iostream>

using namespace std;

int main()
{
    int n=0, x, a[1001], m, t, s, y;
    cin>>n>>x;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        while(n==2){
            if(a[0]>=a[1]){ m = a[0]-a[1]; 
                cout<<m<<endl;
            }
            else if(a[0]<=a[1]){ t = a[1]- a[0]; 
                cout<<t<<endl;
            }
        }
        while(n==3){
            if(a[0]+a[1]<= a[2]){
                s= a[2]-(a[0]+a[1]);
                cout<<s<<endl;
            }
            else if(a[0]+a[1]>=a[2]){
                y= (a[0]+a[1])- a[2];
                cout<<y<<endl;
            }
            }
        }

    
    return 0;
}
