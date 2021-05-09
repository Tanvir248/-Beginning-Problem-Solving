#include <stdio.h>
int main()
{
    double a, b, c, d, x, m;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    m = (a * 2 + b * 3 + c * 4 + d) / 10;
    printf("Media: %.1f\n", m);
    if (m >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if (m >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &x);
        printf("Nota do exame: %.1f\n", x);
        if (x + m / 2.0 > 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (x + m ) / 2.0);
    }
    else{
        printf("Aluno reprovado.\n");
    }
    return 0;
}
