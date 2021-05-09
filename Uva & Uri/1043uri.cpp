#include<stdio.h>
int main()
{
    float a, b, c;
    scanf("%f%f%f",&a,&b,&c);
    if(a==(b+c)&&b<a+c && c<a+b){
        printf("Area = %.1f\n", c*(a+b)/2);
    } else printf("Perimetro = %.1lf\n", a+b+c);
    return 0;
}
