#include <stdio.h>

#define IN 1
#define OUT 0

main() {

    int c;
    int count[11]={0};
    int length=0;
    int inWord=0;
    //count the lengths of words in file
    while((c=getchar()) != EOF) {
        if(c=='\n' || c== '\t' || c==' '){
            if(inWord==1) {
                inWord=0;
                if(length>10){
                    ++count[10];
                }else{
                    ++count[length];
                }
                length=0;
            }
        }else{
            if(inWord==0){
                inWord = 1;
            }
            ++length;
        }
    }
    //output histogram
    int i=0;
    for(i=0;i<11;i++) {
        printf("length:%d ",(i+1));
    }
    printf("\n");
    int state =1;
    while(state){
        state=0;
        i=0;
        for(i=0;i<11;i++) {
            if(count[i]>0) {
                printf("    |    ");
                --count[i];
                state=1;
            }else{
                printf("         ");
            }
        }
        printf("\n");
    }


}
