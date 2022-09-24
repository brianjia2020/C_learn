#include <stdio.h>

int main() {

    char c1 = 'a';
    printf("Please input a char: ");
    scanf("%c", &c1);

    // anything expressions contains a value can be regarded as an expression
    switch (c1) {
        case 'a':
            printf("Today is monday, monkey in new cloth\n");
            break;
        case 'b':
            printf("Today is tuesday, monkey is second\n");
            break;
        case 'c':
            printf("Today is tuesday, monkey climbing moutain\n");
            break;
        default:
            printf("No options matched.");
            break;
    }
    return 0;
}
