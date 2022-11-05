#include <stdio.h>

int main(){
    int map[3][3] = {{0,0,1},{1,1,1},{1,1,3}};
    //loop
    int rows = sizeof(map) / sizeof(map[0]);
    int cols = sizeof(map[0]) / sizeof(map[0][0]);
    int sum = 0;
    for (int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            printf("&map[%d][%d] = %p |", i, j, &map[i][j]);
            sum += map[i][j];
        }
        printf("\n");
    }
    printf("sum=%d\n", sum);
    return 0;
}