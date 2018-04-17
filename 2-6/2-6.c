#include <stdio.h>
unsigned setbits(unsigned int,int,int,unsigned);
int main(){

    unsigned int x=0x0000ffff;
    int p=5,n=3;
    unsigned int y=0x33333333;
    unsigned int result = setbits(x, p, n, y);
    printf("x:0x%x after set position %d rightmost %d as 0x%x:0x%x\n",x,p,n,y,result);
    return 0;
}
unsigned setbits(unsigned int x, int p, int n, unsigned y){
    unsigned int mask = ~(~0<<n);
    y=y & mask;
    y=y << (p+1-n);
    mask=~(~(~0 << n) << (p+1-n));
    x=x & mask;   //clear x at p to p-n
    return x | y;

}
