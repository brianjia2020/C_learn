#include <stdio.h>

enum DAY {
        MON=1, TUE, WED, THU,
        FRI, SAT, SUN } day;

void main() {
    day = WED;
    printf("Today is %d\n", day);

    for (int i=MON; i<= SUN; i++) {
        printf("Today is %d\n", i);
    }
    // return 0;
}
