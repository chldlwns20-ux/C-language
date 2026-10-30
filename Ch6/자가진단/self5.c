#include <stdio.h>

int main() {
    int num;
    int count3 = 0;
    int count5 = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num % 3 == 0) {
            count3++;
        }
        if (num % 5 == 0) {
            count5++;
        }
    }

    printf("Multiples of 3 : %d\n", count3);
    printf("Multiples of 5 : %d", count5);

    return 0;
}