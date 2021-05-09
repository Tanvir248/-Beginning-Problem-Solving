#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    gets(a);
    for(int i=0; i<=strlen(a); i++){
            if(i%2==0) {
                    printf("%c", a[i]);}
    }

    return 0;
}
