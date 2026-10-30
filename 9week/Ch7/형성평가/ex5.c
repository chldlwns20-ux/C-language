#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char c = 'A';
    int d = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j < n) {
                printf("%c ", c++);
            } else {
                printf("%d ", d++);
            }
        }
        if (i < n - 1) {
            printf("\n");
        }
    }

    return 0;
}