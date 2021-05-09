#include<stdio.h>
int main()
{
    int D;
    scanf("%d",&D);
    if(D==61)
        printf("Brasilia\n");
   else if(D==71)
        printf("Salvador\n");
       else if(D==11)
        printf("Sao Paulo\n");
       else if(D==21)
        printf("Rio de Janeiro\n");
       else if(D==32)
        printf("Juiz de Fora\n");
       else if(D==19)
        printf("Campinas\n");
        else if(D==27)
        printf("Vitoria\n");
        else if(D==31)
        printf("Belo Horizonte\n");
        else
            printf("DDD nao cadastrado\n");

    return 0;
}
