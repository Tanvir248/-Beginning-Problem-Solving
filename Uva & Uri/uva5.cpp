#include<string.h>
#include <stdio.h>
int main()
{
    char a[100], b[100];
        int x;
    while(1){gets(a);
            x=strcmp("DONE",a);
        if(x==0)break;
    strcpy(b, a);
    strrev(a);

   if(strcmp(b, a)==0)
    printf("You won't be eaten!\n");
    else
        printf("Uh oh..\n");
        }

        return 0;
}
