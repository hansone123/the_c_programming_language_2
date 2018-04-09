#include<stdio.h>

#define IN 1
#define OUT 0

main() {

    int c;
    int state = OUT;
    while((c=getchar()) != EOF) {
        if (c=='\t' || c==' ' || c=='\n') {
            if(state == OUT){
                state = IN;
                printf("\n");
            }
        }else{
            state = OUT;
            printf("%c",c);
        }
    }
}
