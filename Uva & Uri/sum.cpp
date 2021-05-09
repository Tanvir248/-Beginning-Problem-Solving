#include<stdio.h>
int main()
{
    int a,n, m;
    scanf("%d", &a);
    while(a--){
        scanf("%d", &m);
        m=m+m;
        printf("%d", &m);
    }
}
