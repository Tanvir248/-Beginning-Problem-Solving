#include <stdio.h>
#include<iostream>
using namespace std;
void update(int *a,int *b) {
    //a= (int *) malloc(sizeof(int));
    //b= (int *) malloc(sizeof(int));
    int Ans = *a-*b;
    
    cout<<*a+*b<<endl;
    if( Ans >0){
    cout<<Ans<<endl;
    }
    if(Ans < 0) {
      Ans = *b - *a;
      cout<<Ans<<endl;
      }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    
    update(pa, pb);

    return 0;
}