#include<stdio.h>
int main()
{
    double n; int i, temp=0;
    for(i=0;i<6;i++){
        scanf("%lf",&n);
        if(n>0 && n%2==0){
            temp++;
        }
    }
    printf("%i valores positivos\n", temp);
    return 0;
}
