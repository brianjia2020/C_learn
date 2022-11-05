#include <stdio.h>
#include <string.h>

void main(){
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    strcpy(str3, str1);
    printf("strcpy(str3, str) = %s\n", str3); // Hello
    strcat(str1, str2);
    printf("strcat(str1, str2) = %s\n", str1);// Hello World
    int len = strlen(str1);
    printf("len s1 = %d\n", len);
}