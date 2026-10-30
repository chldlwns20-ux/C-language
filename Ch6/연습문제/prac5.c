#include <stdio.h>

int main() {
    int num;
    int count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            count++;
        }
    }

    printf("Even numbers = %d", count);

    return 0;
}