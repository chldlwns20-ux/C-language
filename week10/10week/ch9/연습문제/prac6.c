#include <stdio.h>

int main() {
    int score[3][4] = {0};
    int row_sum[3] = {0};
    int col_sum[4] = {0};
    int total_sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &score[i][j]);
            row_sum[i] += score[i][j];
            col_sum[j] += score[i][j];
            total_sum += score[i][j];
        }
        score[i][3] = row_sum[i];
    }
    
    col_sum[3] = total_sum;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", score[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < 4; j++) {
        printf("%d ", col_sum[j]);
    }
    printf("\n");

    return 0;
}