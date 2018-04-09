#include <stdio.h>
#define MAX 1000

int get_line(char *, int);

main() {
    char buf[MAX+1];
    long length=0;
    int temp_len;
    buf[MAX] = '\0';
    do{
        temp_len = get_line(buf,MAX);
        length += temp_len;
        printf("%s", buf);
    }while(buf[temp_len] != '\n' && (temp_len == MAX));

    
    printf ("\nline length:%ld\n", length);
}

int get_line(char *a, int size){

    int i=0;
    int c;
    while(i<size && (c=getchar()) != EOF) {
        *(a+i)=c;
        if (c == '\n')
            break;
        ++i;
    }
    return i;
}
