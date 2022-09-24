#include <stdio.h>

int main() {
    for (int a = 1; a <= 9; a++) {
        for (int b = 1; b <= a; b++) {
            printf("%d * %d = %d | ", a, b, a*b);
        }
        printf("\n");
    }

    printf("Please enter a number: ");
    int level = 0;
    scanf("%d", &level);

    // 1. print half diamond
    for(int i = 1; i <= level; i++) {
        for (int a = 1; a<=i; a++) {
            printf("*");
        }
        printf("\n");
    }

    //2. print whole diamond
    for (int i = 1; i <= level; i++) {
        for (int j = 1; j <= (level * 2 - 1 - (2*i-1)) / 2; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 *i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    //3. print whole empty pyramid
    for (int i = 1; i <= level; i++) {
        for (int j = 1; j <= (level * 2 - 1 - (2*i-1)) / 2; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 *i - 1; j++) {
            if (j == 1 || j == (2*i -1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    //4. print whole empty diamond
    for (int i = 1; i <= level; i++) {
        for (int j = 1; j <= (level * 2 - 1 - (2*i-1)) / 2; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 *i - 1; j++) {
            if (j == 1 || j == (2*i -1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = level - 1; i >= 1; i--) {
        for (int j = 1; j <= (level * 2 - 1 - (2*i-1)) / 2; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 *i - 1; j++) {
            if (j == 1 || j == (2*i -1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
