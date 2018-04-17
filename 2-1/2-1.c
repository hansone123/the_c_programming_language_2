#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void) {
    printf("signed char: min:%d max%d\n",SCHAR_MIN,SCHAR_MAX);
    printf("usigned char: min:%d max:%d\n",CHAR_MIN,CHAR_MAX);
    printf("signed int: min:%d max:%d\n",INT_MIN,INT_MAX );
    printf("usigned int: min:%d max:%u\n", 0,UINT_MAX );
    printf("signed long: min:%ld max:%ld\n",LONG_MIN,LONG_MAX);;
    printf("unsigned long: min:%d max:%lu\n",0,ULONG_MAX);
    return 0;

}
