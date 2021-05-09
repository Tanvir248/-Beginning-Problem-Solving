#include <stdio.h>
int main()
{
    int i,a,b,c,d,fuck;
    scanf("%d", &a);
    for(i=1; i<=a; i++)
    {
        b=i*i;
        c=i*i*i;
        printf("%d %d %d\n",i,b,c);
        d=b+1;
        fuck=c+1;
        printf("%d %d %d\n",i,d,fuck);
    }
    return 0;
}
