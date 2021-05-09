#include <stdio.h>
int main()
{
    int a,b,temp=0;
    scanf("%d %d", &a, &b);
    if(a==b)
        printf("%d\n",temp);
    else if(a<b)
    {
        for(a=a+1;a<b;a++)
        {
            if(a%2==1||a%2==-1)
                temp=a;
        }
        printf("%d\n",temp);
    }
    else if(a>b)
    {
        for(b=b+1;b<a;b++)
        {
            if(b%2==1||b%2==-1)
                temp+=b;
        }
        printf("%d\n",temp);
    }
    return 0;
}

