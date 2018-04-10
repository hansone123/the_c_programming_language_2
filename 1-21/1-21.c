#include <stdio.h>
#define MAX 1000
#define IN 1
#define OUT 0
#define TabLen 8
int get_line(char *,int);
void entabAndPrint(char*,int);
int main() {
    
    char BUF[MAX];
    int length =0;
    do{
        length = get_line(BUF,MAX);
        entabAndPrint(BUF,length);
    }while(length>0);

    return 0;
}

int get_line(char *str, int limit){
    int c,i;
    for(i=0;i<limit-1 && (c=getchar())!=EOF && c !='\n'; ++i) {
        *(str+i) = c;
    }
    if(c=='\n') {
        *(str+i) = c;
        ++i;
    }
    *(str+i) = '\0';
    return i;
}
void entabAndPrint(char *str, int length){
    int i;
    int inBlank = OUT;
    int blank_s =0;
    int blank_end = 0;
    for (i=0;i<length; ++i) {
        if (*(str+i) == ' ') {
            if (inBlank == OUT) {
                inBlank = IN;
                blank_s = i;
            }
        }else{
            if (inBlank ==IN){
                inBlank = OUT;
                blank_end = i;
                int tabNum,blankNum;
                tabNum =blank_end/8-blank_s/8;
                if (tabNum>0)
                    blankNum = blank_end%8;
                else
                    blankNum = blank_end-blank_s;
                int j;
                for (j=0;j<tabNum;++j)
                    printf("\t");
                for (j=0;j<blankNum;++j)
                    printf(" ");
            }
            printf("%c",*(str+i));
        }
    }
}

