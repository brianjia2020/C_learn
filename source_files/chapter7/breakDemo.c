#include <stdio.h>

int main() {
    int i;
    for (i = 0; i<= 10; i++) {
        if (i == 3) break;
        printf("This is number %d\n", i);
    }
    return 0;
}
