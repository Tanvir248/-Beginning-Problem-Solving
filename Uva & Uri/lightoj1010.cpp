#include<stdio.h>
int main()
{
    int a, b, n, i, x;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d", &a, &b);
        x=a*b;{
        if(x%2==0){printf("%d\n", x/2);}
        else if(x%2 !=0){printf("%d\n", (x/2)+1);}}
    }
    return 0;
}
