#include <stdio.h>

int main(){
    char str[1000];
    printf("Please enter a string: \n");
    gets(str);  // not safe lol

    printf("You have entered: ");
    puts(str);
    printf("\n");
}