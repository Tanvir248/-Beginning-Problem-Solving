
#include<stdio.h>
#include<string.h>
int main()
{
    int i2, i=4;
    double d2, d = 4.0;
    char s2[100];
    char s[]={"HackerRank "};
    
    scanf("%d", &i2);
    scanf("%lf", &d2);
    scanf("%*[\n] %[^\n]", s2);
    
    printf("%d\n", i + i2);
    printf("%.01lf\n", d + d2);
    printf("%s%s", s, s2);
    return 0;
}

