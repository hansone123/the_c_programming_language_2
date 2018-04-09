#include <stdio.h>

#define IN 1
#define OUT 0

main() {

    int c;
    int inBlanks = OUT;
    while((c=getchar()) != EOF ) {
        if(c != ' '){
            inBlanks = OUT;
            putchar(c);
        }else if(inBlanks == OUT) {
            inBlanks = IN; 
            putchar(c);
        }
    }
}
