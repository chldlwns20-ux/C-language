#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 2; j <= 6; j++) {
            printf("%d ", i + j);
        }
        printf("\n");
    }

    return 0;
}