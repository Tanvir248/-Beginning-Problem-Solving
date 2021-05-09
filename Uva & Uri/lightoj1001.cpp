#include<stdio.h>
int main()
{
    int n, a[5], i, s, m, d;
    scanf("%d",&n);
    for(i=0; i<=n; i++){
        scanf("%d", &a[i]);{
         m= a[i]%2;
            d= a[i]/2;
            s=m+d;
            printf("%d %d\n", d, s);}
    }

    return 0;
}
