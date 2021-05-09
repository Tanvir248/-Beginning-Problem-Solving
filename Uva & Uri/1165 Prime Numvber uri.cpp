#include<iostream>
using namespace std;

int main()
{
    int N, X, i, j, c=0;
    cin>>N;
    if(N>=1 && N<=100)
    {
        for(i=1; i<=N; i++)
        {
            cin>>X;
            for(j=1,c=0; j<=X; j++)
            {
                if(X%j==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
               cout<<X<<" eh primo"<<endl;
            }
            else
            {
               cour<<X<<" nao eh primo"<<endl;
            }
        }
    }
    return 0;
}
