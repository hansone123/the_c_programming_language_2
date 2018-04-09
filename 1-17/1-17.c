#include <stdio.h>
#define MAX 1000

int get_line(char *, int);

main() {
    char buf[MAX+1];
    long length;
    int temp_len;
    buf[MAX] = '\0';
    while(temp_len >0){
        length=0;
        do{
            temp_len = get_line(buf,MAX);
            length += temp_len;
            if (length>80)
                printf("%s", buf);
        }while(buf[temp_len] != '\n' && (temp_len == MAX));
        if(length>0 && length>80)
            printf ("\nline length:%ld\n", length);
    }
}

int get_line(char *a, int size){

    int i,c;
    for(i=0; i<size && (c=getchar())!=EOF && c!='\n'; ++i)
        *(a+i)=c;
    if(c == '\n') {
        *(a+i)=c;
        ++i;
    }
    a[i] = '\0';
    return i;
}
