#include <stdio.h>
int main()
{
    int a, b, c, d, duration_h, duration_m;
    scanf("%d %d %d %d", &a, &c, &b, &d);

    duration_h = b - a;

    if (duration_h < 0)
    {
        duration_h = 24 + (b - a);
    }

 duration_m = d - c;
 if (duration_m < 0)

  {
    duration_m = 60 + (d - c);
    duration_h--;
  }

    if (a == b && c == d)

    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_h, duration_m);
    return 0;
}
