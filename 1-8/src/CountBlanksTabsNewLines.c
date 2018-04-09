#include <stdio.h>

main() {
    int c;
    long bc,tc,lc;
    bc=tc=lc=0;
    while((c=getchar()) != EOF) {
        if (c == ' ')
            ++bc;
        if (c == '\t')
            ++tc;
        if (c == '\n')
            ++lc;
    }

    printf("blanks:%ld\ttabs:%ld\tnewlines:%ld\n",bc,tc,lc);
}
