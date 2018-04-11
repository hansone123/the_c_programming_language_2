#include <stdio.h>
#define MAX 50
#define tabLen 8
char buf[MAX];

void printLine(int);
int replaceTab(int);
int findLastBlank(int);
int newPosition(int);
int main() {

    int c;
    int pos = 0;
    extern char buf[MAX];
    while((c=getchar()) != EOF) {
    
        buf[pos]=c;
        if(c == '\t')
            pos = replaceTab(pos);
        if(c == '\n'){
            printLine(pos);
            pos = 0;
        }else if(++pos>=MAX) {
            int lastPos = findLastBlank(pos);
            printLine(lastPos+1);
            pos = newPosition(lastPos+1);
        }
    }
    return 0;
}
int newPosition(int pos) {
    if (pos>=50 || pos<=0)
        return 0;
    int i,j;
    for(i=pos,j=0; i<MAX; ++i,++j) {
        buf[j] = buf[i];
    }
    return j;
}
int findLastBlank(int pos) {
    int i;
    for(i=pos-1;i>=0;--i) {
        if(buf[i] == ' ')
            return i;
    }
    return MAX;
}
int replaceTab(int pos){
    int i;
    for(i=0; i<tabLen-(pos%8) && (pos+i)<MAX;++i)
        buf[pos+i] = ' ';
        return pos+i-1;
}
void printLine(int limit) {
    int i;
    for(i=0;i<limit;++i) {
        putchar(*(buf+i));
    }
    if(limit>0)
        putchar('\n');
}
