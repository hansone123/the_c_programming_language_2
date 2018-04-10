#include <stdio.h>
#define MAX 1000

int get_line(char *, int limit);
void reverse(char *,int strlen);
void swap(char *, char *);
int main() {
    
    int strlen;
    char str[MAX];
    while((strlen=get_line(str,MAX))>0) {
        reverse(str,strlen-1);
        printf("%s",str);
    }
    return 0;    
}

int get_line(char *a, int limit) {
    int c;
    int i;
    for(i=0; i<(limit-1) && (c=getchar())!=EOF && c!='\n' ;++i) {
        *(a+i) = c;
    }
    if(c=='\n') {
        *(a+i) = '\n';
        ++i;
    }
    *(a+i) = '\0';
    return i;
}

void reverse(char *a, int strlen) {
    int i;
    for(i=0; i<strlen/2; ++i) {
        swap((a+i),(a+strlen-i));
    }
}
void swap(char *a, char *b) {

    char temp = *a;
    *a = *b;
    *b = temp;
    
}
