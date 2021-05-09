#include<math.h>
#include<stdio.h>

#define PI acos(-1)

int main()
{
    double n=0, a, b,c, x, y;
    scanf("%lf", &n);
    while(n--){
            scanf("%lf", &a);
            b= a*0.6;
            c= a*0.2;
            x=PI*c*c;
            printf("%.2lf %.2lf\n",x , (b*a)-x );
    }
        return 0;
}
