#include <stdio.h>

int main() {
    int count[26] = {0};
    char c;

    while (1) {
        scanf(" %c", &c);

        if (c < 'A' || c > 'Z') {
            break;
        }

        count[c - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", i + 'A', count[i]);
        }
    }

    return 0;
}