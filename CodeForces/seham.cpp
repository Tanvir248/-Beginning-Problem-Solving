#include<iostream>
//#include<cstdio>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=2; i<=n; i++)
    {
        int c=0;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                //c++;
                break;
            }
        }
        if(!c)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
