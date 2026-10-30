#include <stdio.h>

int main() {
    int a, b;
    int sum = 0;
    int count = 0;

    scanf("%d %d", &a, &b);

    int start = (a < b) ? a : b;
    int end = (a > b) ? a : b;

    for (int i = start; i <= end; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            count++;
        }
    }

    printf("sum : %d\n", sum);
    printf("avg : %.1f", (double)sum / count);

    return 0;
}