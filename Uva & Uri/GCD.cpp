#include<stdio.h>
int main()
{
    int a, b, min;
    int i;
    scanf("%d%d", &a, &b);
    if(a>b)
        min=a;
    else
        min=b;
    for(i=min; i>=1; i--){
        if(a%i==0 && b%i==0){
            printf("GCD is: %d", i);
            break;
        }
    }
    return 0;
}
