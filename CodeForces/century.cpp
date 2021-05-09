#include<stdio.h>
int main()
{
   int n, a[50],i,s=1, j, k, l, highm=0, lown=0;
   scanf("%d", &k);
   while(k--){
        scanf("%d%d", &n, &j);
        for(i=1; i<=n-1; i++){
            scanf("%d", &l);
            if(j>l) highm++;
            if(l>j) lown++;
            j=l;
        }
        printf("Case %d: %d %d\n",s++, lown, highm);
   }
   return 0;
}
