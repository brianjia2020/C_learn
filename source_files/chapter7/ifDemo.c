#include <stdio.h>

int main() {
    /**
     * write a program to get an input as people's age
     * if it's greater than 18, then he is an adult
     * else it's a kid
     */
    int age = 0;
    printf("Please input your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Ah you an adult!\n");
    } else {
        printf("You are a kid!\n");
    }
    return 0;
}
