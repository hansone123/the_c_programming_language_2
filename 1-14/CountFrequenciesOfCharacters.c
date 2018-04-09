#include <stdio.h>

main() {

    int c;
    float count =0;
    float resultCount[11] = {0};
    while((c=getchar()) != EOF) {
        ++count;
        if (c >= 97 && c<=106) {
            ++resultCount[c-97];
        }else{
            ++resultCount[10];
        }
    }

    int i;
    for(i=0; i<11;i++) {
        double out = 100*resultCount[i]/count;
        printf("%c: %.2f percents  %.0ftimes.\n",(i+97),out, resultCount[i]);
    }
}
