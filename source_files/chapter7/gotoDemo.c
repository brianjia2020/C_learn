#include <stdio.h>
#include <math.h>

int main() {
    printf("start\n");
    goto label1;
    printf("ok1");
    printf("ok2");
    label1:
    printf("ok3\n");
    printf("ok4\n");

    int input;
    printf("Please enter the number: ");
    scanf("%d", &input);
    if (input > 999 || input < 99) {
        printf("This number is not valid\n");
    } else {
        int res;
        while (input > 0) {
            // printf("%d\n", input);
            int temp = input % 10;
            res += pow(temp, 3);
            printf("%d\n", temp);
            input = input / 10;
        }
        // printf("%d", res);
        if (res == input) {
            printf("This number is valid\n");
        } else {
            printf("This number is not valid\n");
        }
    }
    return 0;
}
