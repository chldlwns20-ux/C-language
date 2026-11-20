#include <stdio.h>

struct Student {
    char name[100];
    int score;
};

int main(void) {
    struct Student s[5];
    int max_idx = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s %d", s[i].name, &s[i].score);
        if (s[i].score > s[max_idx].score) {
            max_idx = i;
        }
    }

    printf("%s %d\n", s[max_idx].name, s[max_idx].score);

    return 0;
}