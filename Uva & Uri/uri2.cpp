#include<stdio.h>
int main()
{
    double n, a=0, b=0, x;
    while(1){

    scanf("%lf", &n);

    if(n<0)
        break;
    else{
        b += n;
        a++;
    }

    }
    x= b/a;
      printf("%.2lf",x);
    return 0;
}
