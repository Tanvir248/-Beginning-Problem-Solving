#include<stdio.h>
int prime(int a);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime(n);
    return 0;
}
int prime(int a)
{
    int i;
    for(i=2; i<=a-1; i++){if(i==a){printf("%d is prime. \n");}
        if(a%1==0)
        {
            printf("%d is  prime.\n", a);
            break;
        }

    }

}
