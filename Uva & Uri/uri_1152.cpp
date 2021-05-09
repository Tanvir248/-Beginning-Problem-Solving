#include<stdio.h>
int main()
{
    int i, a, b=1;
    scanf("%d", &a);
     if(a > 0)
    {
        for(i=1; i<=a; ++i)
        {
            b *= i;
        }
        printf("%d\n", b);
    }
      }
    return 0;
}
