#include<stdio.h>
int main()
{
    int a[10], i, sum=0;
    for(i=1; i<10; i++){
        scanf("%d", a[i]);
        sum += a[i];
        printf("a%d" ,sum);
    }
    return 0;
}
