#include <stdio.h>

int main() {
    int num;
    int even = 0;
    int odd = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("even : %d\n", even);
    printf("odd : %d", odd);

    return 0;
}