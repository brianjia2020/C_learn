#include <stdio.h>

#define MAX(a,b) a > b ? a : b
#define SQ(y) (y)*(y)

int SQ2(int a) {
    return a*a;
}
/*
* macro is more of a regex replacement, it's does not take memory.
*       better to put brcket for the params
* function is taking up memory
*/

void main(){
    int x = 10, y = 20, max;
    // printf("input two words: ");
    // scanf("%d %d", &x, &y);
    max = MAX(x, y);
    printf("max=%d\n", max);
    int sq = SQ(x+1);
    printf("sq=%d\n", sq);
}
