#include<stdio.h>
int main()
{
    long long int a, b[100000], n;
    scanf("%lld", &n);
    for(a=1; a<=n; a++)
    {
        scanf("%lld", &b[a]);
        printf("%lld^2=%lld\n",b[a],(b[a]*b[a]));
    }
    return 0;
}
