#include <stdio.h>
/*""""""*/
//printf("\"");
//printf("%c",'\'');
/*"\""*/

void rmCommt(int c);
void nCommt(int x);
int main() {
    int c;
    
    while((c=getchar())!=EOF) {
        
        if (c == '/' ){
            rmCommt(c);
        }else if (c=='\"' || c=='\'') {
            nCommt(c);
        }else{
            putchar(c);
        }
        
    }
    printf("test string:/*abc*/\n");
    return 0;
}
void rmCommt(int c) {
    int d;
    d=getchar();
    if( d == '/') {
        do{ d=getchar(); }while(d!='\n');
    }else if( d=='*') {
        c=getchar();
        do{
            d=getchar();
            if(c=='*' && d=='/') {
                break;
            }
            c=d;
        }while(c!=EOF);
    }else{
        putchar(c);
        putchar(d);
    }
        
}
void nCommt(int c){
    putchar(c);
    int d;
    do{
        d=getchar();
        putchar(d);
        if(d=='\\') {
            putchar(getchar());
        }
    }while(d != c && d!=EOF);
}
