#include <stdio.h>

int main() {
    int score;
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &score);
        sum += score;
    }

    printf("sum : %d\n", sum);
    printf("avg : %.1f", (double)sum / 5);

    return 0;
}