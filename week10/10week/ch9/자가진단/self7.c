#include <stdio.h>

int main() {
    int arr[5][5] = {0};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 || j == 0) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n"); // 각 행이 끝날 때마다 줄바꿈 수행
    }

    return 0;
}