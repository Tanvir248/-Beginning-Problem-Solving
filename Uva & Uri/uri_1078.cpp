#include<stdio.h>
int main()
{
    int i=0,n;
    scanf("%d",&n);
    while(i<10){
        i++;
        printf("%d x %d = %d\n", i, n, i*n);
    }
    return 0;
}
