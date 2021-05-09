#include <stdio.h>

int main(){

    int n, i;
    int notes[] = {100,50,20,10,5,2,1};

    scanf("%d", &n);
    printf("%d\n", n);

    for(i = 0; i < 7; i++){
        printf("%d nota(s) de R$ %d,00\n", n / notes[i], notes[i]);
        n = n % notes[i];
    }

    return 0;
}
