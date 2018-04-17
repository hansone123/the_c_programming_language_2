#include <stdio.h>
unsigned getbits(unsigned,int,int);
int main() {

    unsigned int x=0xffff1234;
    printf("x:%x\t%x\n",x,getbits(x,4,3));
    return 0;
}
unsigned getbits(unsigned x, int p, int n){
    return (x >> (p+1-n)) & ~(~0 << n);
}
