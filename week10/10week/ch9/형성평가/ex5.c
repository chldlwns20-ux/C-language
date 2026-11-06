#include <stdio.h>

int main() {
    int arr[4][3];
    int row_sum[4] = {0};
    int total_sum = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
            row_sum[i] += arr[i][j];
            total_sum += arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        printf("%d\n", row_sum[i]);
    }
    printf("%d\n", total_sum);

    return 0;
}