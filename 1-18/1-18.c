#include <stdio.h>
#define IN 1
#define OUT 0
#define MAX 1000
int get_line(char *, int);

main() {

    int temp_len,length=1;
    char BUF[MAX];
    while(length>0){
        length =0;
        do{
            temp_len = get_line(BUF,MAX);
            length+=temp_len;
            if(temp_len>0)
                printf("%s",BUF);
        }while(temp_len == (MAX-1) && BUF[temp_len] !='\n');

    }
}

int get_line(char *buf, int limit) {
    
    int i,c;
    int inBlank=OUT;
    int pos;
    for(i=0; i<(limit-1) && (c=getchar())!=EOF && c!='\n'; ++i) {
        *(buf+i)=c;
        if(c =='\t' || c==' '){
            if(inBlank==OUT) {
                inBlank=IN;
                pos =i;
            }
        }else{
            inBlank=OUT;
        }
        
    }
    if (inBlank==IN)
        i=pos;   
    if(c=='\n') {
        *(buf+i) = '\n';
        ++i;
    }
    *(buf+i) = '\0';
    return i;

}
