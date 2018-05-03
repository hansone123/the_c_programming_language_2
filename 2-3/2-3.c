#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int htoi(char*);

int main(){
    char str[100]="0XA125B";
    printf("%s\n",str);
    printf("%d\n",htoi(str));
    return 0;
}

int htoi(char* str){
    int i;
    for(i=0; str[i]!='\0' && str[i]!='x' && str[i]!='X'; ++i){
    }
    ++i;
    int result=0;
    int temp=0;
    while(str[i]!='\0'){
        if(isdigit(str[i])){
            temp=str[i]-'0';
        }else if(islower(str[i])){
            temp=str[i]-'a'+10;
        }else if(isupper(str[i])){
            temp=str[i]-'A'+10;
        }else{
            return -1;}
        printf("%c,%d,",str[i],temp);
        printf("%d\n",result);
        result=result*16+temp; 
        ++i;
    }

    return result;

}
