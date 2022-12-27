#include <stdio.h>

void main(){
    // create a file
    FILE *fp = NULL;
    const char* file = "./source_files/chapter14/test.txt";
    fp = fopen(file, "a"); 
    // a -> append
    // w -> write
    // r -> read only
    fprintf(fp, "Chunyang\n");
    fputs("hello shanghai\n", fp);

    fclose(fp);
}