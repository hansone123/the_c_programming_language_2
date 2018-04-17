#include <stdio.h>
unsigned invert(unsigned int x, int p, int n);
int main() {
    unsigned int x=0xFFFF3456;
    int p=20;
    int n=7;
    printf("x:%x p:%d n=%d result:%x\n",x,p,n,invert(x,p,n));
return 0;
}

unsigned invert(unsigned int x, int p, int n) {
    unsigned int mask=(~(~0 << n) <<(p+1-n));
    printf("mask:%x\n",mask);
    return (~mask & x) | ~((mask & x) | ~mask);
}
