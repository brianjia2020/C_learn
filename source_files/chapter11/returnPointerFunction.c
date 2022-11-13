#include <string.h>
#include <stdio.h>

char* strlong(char* str1, char* str2) {
    printf("str1 length is %d, str2 length is %d\n", strlen(str1), strlen(str2));
    if (strlen(str1) >= strlen(str2)) return str1;
    return str2;
}

void main(){
    char str1[30], str2[30], *str;
    printf("Please input the first string: \n");
    gets(str1); // potential hack, dangerous
    printf("Please input the second string: \n");
    gets(str2);
    str = strlong(str1, str2);
    printf("Longer string is %s\n", str);
}