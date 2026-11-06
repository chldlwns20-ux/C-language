#include <stdio.h>

int main() {
    int arr[4][2];
    int row_sum[4] = {0};
    int col_sum[2] = {0};
    int total_sum = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
            row_sum[i] += arr[i][j];
            col_sum[j] += arr[i][j];
            total_sum += arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        printf("%d ", row_sum[i] / 2);
    }
    printf("\n");

    for (int j = 0; j < 2; j++) {
        printf("%d ", col_sum[j] / 4);
    }
    printf("\n");

    printf("%d\n", total_sum / 8);

    return 0;
}