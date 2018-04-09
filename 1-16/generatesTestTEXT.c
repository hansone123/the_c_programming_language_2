#include <stdio.h>

main() {
    int c;
    int number=0;
    
    while((c=getchar()) != ';') {
        if (c>=48 && c<=57)
            number = number*10 + (c-48);
    }
    int i;
    for(i=0;i<number;i++) {
        putchar('a');
    }
}
