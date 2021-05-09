#include<stdio.h>
int main()
{
    int a, b, c, d, e, f;
    scanf("%d", &a);
    b=(a/3)*2;
    c= (b%3);
    if(b==2)
        c+=1;
    printf("%d", &c);
}
