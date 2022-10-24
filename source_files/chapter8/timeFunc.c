#include <stdio.h>
#include <time.h>

void test() {
    int sum = 0;
    for (int i=0; i < 77777777; i++) {
        for(int j=0; j < 100; j++) {
            sum += j;
        }
    }
    printf("sum=%d\n", sum);
}

void main() {
    time_t curtime;
    time(&curtime);
    printf("curtime=%s\n", ctime(&curtime));

    // get time before test() method
    printf("program started.\n");
    time_t startT;
    double diff;
    time(&startT);
    // execute test()
    test();
    // get time after test()
    time_t endT;
    time(&endT);
    diff = difftime(endT, startT);
    printf("test() takes %.5f seconds\n", diff);
}
