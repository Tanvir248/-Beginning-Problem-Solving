#include<stdio.h>
int main()
{
    int a, b, l;
    scanf("%d", &a);
    for(b=1; b<=a; b++){
        if(b%2==0){
            l=b*b;
            printf("%d^2 = %d\n", b, l);
        }
    }
    return 0;
}
