#include <stdio.h>

int main() {
    int n;
    int max = -2147483648;
    int min = 2147483647;
    int count = 0;

    while (count < 100) {
        scanf("%d", &n);
        
        if (n == 0) {
            break;
        }

        if (n > max) {
            max = n;
        }
        if (n < min) {
            min = n;
        }

        count++;
    }

    printf("%d\n", max + min);

    return 0;
}