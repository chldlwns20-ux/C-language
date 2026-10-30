#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num = 1;
    char ch = 'A';

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("%d ", num++);
        }
        for (int j = 0; j <= i; j++) {
            printf("%c ", ch++);
        }
        printf("\n");
    }

    return 0;
}