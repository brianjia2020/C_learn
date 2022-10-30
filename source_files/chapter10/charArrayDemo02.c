#include <stdio.h>
#include <string.h>

void main(){
    char greeting[] = "Hello";
    printf("greeting=%s\n", greeting);

    int len = strlen(greeting);
    for (int i=0;i<len;i++){
        printf("%c\n", greeting[i]);
    }

    // using a char pointer to point to a string
    char* c = "Hello Brian";

    printf("c address = %p, c points to %p\n", &c, c);
    len = strlen(c);
    printf("c=%s\n", c);
    for (int i=0;i<len;i++){
        printf("%c\n", c[i]);
    }

    // char array is a constant and cannot be modified.
    // char pointer can be modified completely.
}