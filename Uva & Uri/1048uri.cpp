#include<stdio.h>
int main()
{
    double a,l,m,n,o,p;
   int x=15,y=12,z=10,b=7,c=4;
    scanf("%lf",&a);
     l= a/100*x; //printf("%lf",l);
     m=a/(100*y);
     n=a/(100*z);
     o=a/(100*b);
     p=a/(100*c);
        if(a>=1 && a<=400.00){
            printf("Novo salario: %.2lf\n",a+l);
            printf("Reajuste ganho: %.2lf\n",l);
            printf("Em percentual: %d % \n",x);
            }
            else if(a>= 400.01 && a<= 800.00)
            {
            printf("Novo salario: %.2lf\n",a+m);
            printf("Reajuste ganho: %.2lf\n",m);
            printf("Em percentual: %.2lf %\n",y);
            }
            else if(a>= 800.01 && a<= 1200.00)
            {
            printf("Novo salario: %.2lf\n",a+n);
            printf("Reajuste ganho: %.2lf\n",n);
            printf("Em percentual: %.2lf %\n",z);
            }
             else if(a>= 1200.01 && a<= 2000.00)
            {
            printf("Novo salario: %.2lf\n",a+b);
            printf("Reajuste ganho: %.2lf\n",o);
            printf("Em percentual: %.2lf %\n",b);
            }
             else if(a>= 2000.01)
            {
            printf("Novo salario: %.2lf\n",a+p);
            printf("Reajuste ganho: %.2lf\n",p);
            printf("Em percentual: %.2lf %\n",c);
            } return 0;
   }


