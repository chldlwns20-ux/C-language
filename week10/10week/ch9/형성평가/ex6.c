#include <stdio.h>

int main() {
    int arr[5][5] = {0};

    arr[0][0] = 1;
    arr[0][2] = 1;
    arr[0][4] = 1;

    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int left = (j - 1 >= 0) ? arr[i - 1][j - 1] : 0;
            int right = (j + 1 < 5) ? arr[i - 1][j + 1] : 0;
            arr[i][j] = left + right;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}