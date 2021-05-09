#include <stdio.h>
int main()
{
  int i, a, b;
  int in=0, out=0;
  scanf("%d", &b);
  for(i=0; i<b;i++){
        scanf("%d", &a);
    if(a>=10&& a<=20){
        in++;
    } else {
    out++;
    }
  }
     printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}


