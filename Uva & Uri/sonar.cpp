#include<stdio.h>
int main()
{
    int n, a, b,c,x;
    int m = 0;
    scanf("%d", &n);
    while(n--){
        scanf("%d%d%d", &a, &b, &c);
        if(a > c)
            x = a, a = c, c = x;
        if(b > c)
            x = b, b = c, c = x;
        if(a > b)
            x = a, a = b, b = x;
        printf("Case %d: %d\n", ++m, b);
    }
    return 0;
}
