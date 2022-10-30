#include <stdio.h>

void main(){
    // one dimensional array of chars ---> equal to string
    char c[20] = {'h','i',',','b','r','i','a','n'};
    printf("c = %s\n", c);

    char a[7] = {'t','o','m'};
    // in memory a stores as t-o-m-\0-?-?-?
    // \0 means null and the end of string in this case
    // what's behind is meaningless

    char b[3] = {'t','o','m'};
    // potentially it will produce tom and whatever after until it finds \0
    // better to have b defined as char b[4] = {'t','o','m','\0'}
    printf("b = %s, size of b = %d\n", b, sizeof(b));

    char d[3] = {'a','b'}; // system won't add \0
    printf("d = %s, size of d = %d\n", d, sizeof(d));

    char greeting[] = "Hello"; // system will add a \0 by default
}