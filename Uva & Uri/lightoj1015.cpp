#include <stdio.h>
int main()
{
    int a[1000],i,n,sum=0, b, j;
    scanf("%d", &b);
    for(j=1; j<=b; j++)
        {
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    {
        sum+=a[i];
    }
    }
    printf("Case %d: %d\n", j, sum);
    }

    return 0;
    }



