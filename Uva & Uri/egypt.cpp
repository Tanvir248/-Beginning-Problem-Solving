#include<cstdio>
using namespace std;
int main()
{
     long long int a, b, c, n, i;
    while(scanf("%ld%ld%ld",&a,&b,&c)==3){
            //scanf("%lld%lld%lld", &a, &b, &c);


                if(a!=0|| b!=0 ||c!=0 ){

                if((c*c)==(a*a)+(b*b)){printf("right\n");}
                else if((c*c)+(a*a)==(b*b)){printf("right\n");}
                else if((c*c)+(b*b)==(a*a)){printf("right\n");}

                 else
                    {printf("wrong\n");}
                }

    }
    return 0;
}

