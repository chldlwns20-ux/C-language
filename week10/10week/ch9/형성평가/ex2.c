#include <stdio.h>

int main() {
    int arr[100];
    int count[11] = {0};
    int n = 0;

    while (1) {
        scanf("%d", &arr[n]);
        if (arr[n] == 0) {
            break;
        }
        count[arr[n] / 10]++;
        n++;
    }

    for (int i = 10; i >= 0; i--) {
        if (count[i] > 0) {
            printf("%d : %d\n", i * 10, count[i]);
        }
    }

    return 0;
}