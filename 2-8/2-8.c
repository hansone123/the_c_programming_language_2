#include <stdio.h>
int rightrot(int,int);
int main(){
    
    unsigned int x=0xFFFA2310;
    int n=17;
    printf("n:%d, 0x%x, 0x%x\n", n, x, rightrot(x, n));
    return 0;
}
int rightrot(int x, int n){
    unsigned int firstbit;
    int i;
    for(i=0; i<n; ++i){
        firstbit=(0x00000001 & x) << (sizeof(n)*8-1);
        x>>=1;
        x&=0x7FFFFFFF;
        x|=firstbit;
    }
    return x;
}
