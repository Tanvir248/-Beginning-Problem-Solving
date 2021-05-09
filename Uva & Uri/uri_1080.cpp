#include <stdio.h>

int main()
{
 int n, temp = -1, p, i;
 for (i = 1; i < 101; ++i)
 {
  scanf("%d", &n);
  if(temp < n)
   temp = n, p = i;
 }

 printf("%d\n%d\n", temp, p);

 return 0;
}
