#include <stdio.h>


int main() {
    unsigned int i = 1;
    int count = 0;
    do {
        if (i % 5 == 0 && i % 3 != 0) {
            count ++;
        }
        i++;
    } while (i <= 200);
    printf("There are %d numbers can be divided by 5 but not 3\n", count);
    return 0;
}
