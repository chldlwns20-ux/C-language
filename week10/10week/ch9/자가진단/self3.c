#include <stdio.h>

int main() {
    int arr[100];
    int n;
    
    scanf("%d", &n);

    arr[0] = 100;
    arr[1] = n;

    int i = 2;
    while (1) {
        arr[i] = arr[i - 2] - arr[i - 1];
        if (arr[i] < 0) {
            break;
        }
        i++;
    }

    for (int j = 0; j <= i; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}