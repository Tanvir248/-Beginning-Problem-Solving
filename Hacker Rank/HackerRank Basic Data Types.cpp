Basic Data Types

#include <iostream>
#include <cstdio>
#include<string>
using namespace std;

int main() {
    char s[101];
    int a;
    float t;
    double x;
    long long int b;
    cin>>a>> b;
    scanf("%s", s);
    scanf("%f", &t);
    scanf("%lf", &x);
    cout<<a<<endl<<b<<endl;
    printf("%s\n", s);
    printf("%.3f\n",t );
    printf("%.9f\n",x );
    return 0;
}