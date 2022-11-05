#include <stdio.h>

const int MAX = 3;
void main() {
    int var[] = {10, 100, 200};
    int i;
    int *ptr[3];
    i = 0;
    for(i=0;i<MAX;i++){
        ptr[i] = &var[i];
    }
    for(i=0;i<MAX;i++){
        printf("var[%d] = %d, address is %p\n", i, *ptr[i], &ptr[i]);
    }

    // 2.four pointers to char*
    char *books[] = {
        "sanguoyanyi",
        "hongloumeng",
        "xiyouji",
        "shuihuzhuan"};
    for(int i=0;i<sizeof(books) / sizeof(books[0]); i++) {
        printf("%d book is %s\n", i, books[i]);
    }
}