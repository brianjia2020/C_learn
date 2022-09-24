#include <stdio.h>

int main() {
    // 1. question 1
    for (int i=0;i<10;i++){
        printf("Hello Chunyang! i=%d\n", i);
    }

    // 2. question 2
    int count = 0, sum = 0;
    for(int i=1;i<=100;i++) {
        if (i%9 == 0) {
            printf("This is a number, %d\n", i);
            count += 1;
            sum += i;
        }
    }
    printf("There are %d number of digits.\n", count);
    printf("The sum equals to %d.\n", sum);

    // 3. question 3
    int num = 0;
    printf("Please input your number: ");
    scanf("%d", &num);

    for(int i=0;i<=num;i++){
        printf("%d + %d = %d\n", i, num-i, num);
    }
    return 0;
}
