#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int get_line(char*,int);
int strrindex(char*,char*);
int main(){

    char* buf = calloc(MAX, sizeof(char));
    int len=0;
    char* pat="=";
    while((len=get_line(buf,MAX))>0){
        printf("%s",buf);
        printf("%d\n",strrindex(buf, pat));
    }
    return 0;
}
int get_line(char* buf, int limit){
    int c,i,j;
    i=0;
    while(--limit>0 && (c=getchar())!=EOF && c!='\n'){
        buf[i++]=c;
    }
    if(c=='\n')
        buf[i++]=c;
    buf[i]='\0';
    return i;    
}
int strrindex(char* buf, char* pat){
    int i,j,k;
    int max=-1;
    for(i=0; buf[i]!='\0'; ++i){
        for(j=i,k=0; pat[k]!='\0' && buf[j]==pat[k]; ++j,++k){
        }
        if(k>0 && pat[k] == '\0')
            max=i;
    }
    return max;
}
