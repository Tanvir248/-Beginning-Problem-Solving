#include <stdio.h>
int main()
{
    char s[1001];



    while(gets(s)){
            int count = 0, i, t=0;
    for (i = 0;s[i];i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z'||(s[i] >= 'a' && s[i] <= 'z'))
            t=1;
            else {
                count +=t;
                t=0;
            }
    }
    count +=t;
    printf("%d\n", count);}
    return 0;
}
