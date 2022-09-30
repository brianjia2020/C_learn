#include <stdio.h>

enum DAY {
        MON=1, TUE, WED, THU,
        FRI, SAT, SUN } day;

int main() {
    day = WED;
    printf("Today is %d\n", day);
    return 0;
}
