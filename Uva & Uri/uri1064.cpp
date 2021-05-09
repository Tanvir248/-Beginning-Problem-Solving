#include <stdio.h>

int main(){


  float a,temp= 0,avg = 0;
  int i,t = 0;

  for(i = 1; i <= 6; i++) {
   scanf("%f", &a);
   if (a > 0) {
    t++;
    temp = temp+a;
   }
  }
  avg = temp/t;
  printf("%d valores positivos\n",  t);
  printf("%.1f\n",avg);
    return 0;
}
