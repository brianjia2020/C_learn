#include <stdio.h>

void main(){
    FILE* fp = NULL;
    char buf[1024];

    const char* filepath = "./source_files/chapter14/test.txt";
    fp = fopen(filepath, "r");

    // 1. read one first line
    // fscanf(fp, "%s", buf);
    // printf("%s", buf);

    // 2. read whole file
    while(fgets(buf, 1024, fp) != NULL) {
        printf("%s", buf);
    }

    fclose(fp);
}