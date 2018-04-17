#include <stdio.h>

int main() {
    char s1[]="abcdefghi";
    char s2[]="c";
    printf("return:%d\n",any(s1,s2));

    return 0;
}
int any(char* s1, char* s2){
    int appear[256]={0};
    int i,j;
    for(i=0; s2[i]!='\0'; ++i){
        appear[s2[i]]=1;
    }
    for(i=0; s1[i]!='\0'; ++i){
        for(j=0; j<256; ++j){
            if(appear[j]>0 && s1[i]==j)
                return i;
        }
    }
    return  -1;
}
