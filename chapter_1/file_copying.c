// Page 16, 1.5.1

#include <stdio.h>

int main(){
    int c;
    int d = EOF;
    c = getchar();
    while(c != EOF){
        printf("The value of EOF is %d\n", d);
        putchar(c);
        c = getchar();
    }
return 0;
}

/*
A more streamlined implementation:

while((c = getchar())!=EOF)
    putchar(c);

*/