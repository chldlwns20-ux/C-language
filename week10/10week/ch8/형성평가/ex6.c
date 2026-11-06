#include <stdio.h>

int main() {
    int n;
    int count = 0;
    int sum = 0;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        if (n % 5 == 0) {
            count++;
            sum += n;
        }
    }

    if (count > 0) {
        printf("Multiples of 5 : %d\n", count);
        printf("sum : %d\n", sum);
        printf("avg : %.1f\n", (double)sum / count);
    }

    return 0;
}