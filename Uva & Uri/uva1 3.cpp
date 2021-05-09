#include<stdio.h>
int main()
{
    int s;
    scanf("%d", &s);
    while(s--){
        int i,n, x=0, b=100, c;
        scanf("%d", &n);
        for(i=0; i<n; i++){
            scanf("%d", &c);
            if(c>x) x=c;
            if(c<b) b=c;
        }
        printf("%d\n", (x-b)*2);
    }
    return 0;

}
