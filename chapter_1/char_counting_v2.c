#include <stdio.h>

int main(){

    double nc;

    for (nc = 0; getchar() != 'a'; ++nc)
        ;
    printf("%.0f\n",nc);
    return 0;
}