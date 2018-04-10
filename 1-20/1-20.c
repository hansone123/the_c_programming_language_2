#include "stdio.h"

#define MAX 1000
#define TabLen 8
int get_line(char *, int limit);
void detabAndPrint(char *,int len);

int main() {
    
    int len=0;
    char BUF[MAX];
    do{
        len = get_line(BUF,MAX);
        detabAndPrint(BUF,len);
    }while(len>0);
        
    return 0;
}
int get_line(char *str, int limit) {
    int c;
    int i;
    for(i=0; i<limit-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        *(str+i) = c;
    }
    if(c=='\n') {
        *(str+i) = c;
        ++i;
    }
    *(str+i) = '\0';
    return i;
}

void detabAndPrint(char *str, int len) {
    int i;
    for(i=0;i<len;++i) {
        if(*(str+i) == '\t' ) {
            int blanks=TabLen - i%TabLen;
            int j;
            for(j=0;j<blanks;j++) {
                printf(" ");
            }
        }else{
            printf("%c", *(str+i));
        }
    }
}
