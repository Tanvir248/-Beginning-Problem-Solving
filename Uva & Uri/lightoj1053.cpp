#include<stdio.h>
int main()
{
    int a, b, c,d, i;
    scanf("%d", &d);
    for(i=1; i<=d; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        a*=a; b*=b; c*=c;

        if(c == a+b)
        {
            printf("Case %d: Yes\n", i);
        }
        else if(c != a+b)
            printf("Case %d: No\n", i);
    }
    return 0;
}
