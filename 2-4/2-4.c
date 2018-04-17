#include <stdio.h>
void swap(char*,char*);
void squeeze(char*,char*);
void delete(char*,int);
int main(){
    char s1[]="cabcdefghiabcdefghi";
    char s2[]="abababcd";
    printf("s1:%s\n",s1);
    printf("s2:%s\n",s2);
    squeeze(s1,s2);
    printf("revert s1:%s\n",s1);
    return 0;
}
void squeeze(char* s1, char* s2){
    int i;
    int appeal[256]={0};
    for(i=0; s2[i]!='\0'; ++i){
        appeal[s2[i]]=1;
    }
    
    for(i=0; i<256; ++i){
        if(appeal[i]>0){
            //printf("%c,",i);
            delete(s1,i);
        }
    }

}
void delete(char s[], int c) {
    int i,ofst;
//    printf("c:%d,%c\n",c,c);
    for(i=0,ofst=0; s[i]!='\0'; ++i) {
//        printf("s[%d]:%d ",i,s[i]);
        if(s[i]!=c) {
//            printf("ofst:%d",ofst);
            s[ofst++]=s[i];
        }
//        printf("\n");
    }
    s[ofst]='\0';
}
void swap(char* a, char* b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
