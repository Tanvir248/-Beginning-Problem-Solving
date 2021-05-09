#include<stdio.h>
int main()
{
    int a[25], b,j, i;
    int n;
    scanf("%d", &n);
    scanf("%d", &b);
    for(i=0; i<b; i++){
         scanf("%d", &a[i]);
    }
    printf("%d\n", a[n-1]);
    return 0;
}
