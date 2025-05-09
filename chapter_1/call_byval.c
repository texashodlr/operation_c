//Section 1.8, page 27
#include <stdio.h>

int power(int m, int n);

/*
Or:
int power (int, int);
*/

int main(){

    int i;

    for(i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
}

int power(int base, int n){
    int p;

    for(p = 1; n > 0; --n)
        p = p*base;
    return p;
}