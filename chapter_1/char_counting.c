//Page 18, 1.5.2

#include <stdio.h>

int main(){

    long nc;
    nc  = 0;
    while(getchar() != 'a')
        ++nc;
    printf("%ld\n",nc);

    return 0;
}