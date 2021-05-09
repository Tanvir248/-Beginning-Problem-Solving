#include <stdio.h>
int main()
{
    int n,a,j;
    scanf("%d", &n);
    if(n%2==0)
    {
        for(a=n+1;a<=n+11;a=a+2)
            printf("%d\n",a);
    }
    else
    {
        for(j=n;j<=n+10;j=j+2)
            printf("%d\n",j);
    }
    return 0;
}
