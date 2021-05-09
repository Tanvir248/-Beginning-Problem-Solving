#include<stdio.h>
int main()
{
    int a, b, n;
    while(scanf("%d%d", &n, &a) ==2){
        printf("%d\n", (a*n)-1);
    }
    return 0;
}
