#include<stdio.h>
int main()
{
    int n,a,i,j,x,t,m=1;
    scanf("%d %d",&a,&n);
    x = n / a;
    t=a;
    for(i = 1;i <=x;i++){
            printf("%d",m);
        for(j=m+1;j<=t;j++){
            printf(" %d",j);
        }
        printf("\n");
        m += a;
        t += a;
    }
    return 0;
}
