#include <stdio.h>

int main()
{
 int a, i;
 int n = 0;
 for (i = 0; i < 5; ++i)
 {
  scanf("%d", &a);
    if(a % 2 == 0 || a% (-2)== 0 ){
        n++;
  }
 }
 printf("%d valores pares\n", n);

 return 0;
}
