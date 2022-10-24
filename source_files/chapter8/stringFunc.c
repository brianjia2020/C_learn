#include <stdio.h>
#include <string.h>

void main() {
    char src[50], dest[50];
    char * str = "abcdff";
    printf("str.length = %d\n", strlen(str));

    strcpy(src, "Hello Brian Jia");
    printf("src=%s\n", src);

    strcat(src, " a new tail");
    printf("src=%s\n", src);
}
