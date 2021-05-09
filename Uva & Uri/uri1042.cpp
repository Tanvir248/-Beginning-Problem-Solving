#include <stdio.h>

int main()

{

    int a, b, c, g, m, s, t;

    scanf("%d %d %d", &a, &b, &c);

    g = a;

    m = b;

    s = c;

    if (g < m)

    {

        t = g;

        g = m;

        m = t;

    }

    if (m < s)

    {

        t = m;

        m = s;

        s = t;

    }

    if (g < m)

    {

        t = g;

        g = m;

        m = t;

    }

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",s,m,g,a,b,c);

    return 0;

}
