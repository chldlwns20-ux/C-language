#include <stdio.h>

struct Person {
    char name[100];
    int height;
};

int main(void) {
    struct Person p[5];
    int min_idx = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s %d", p[i].name, &p[i].height);
        if (p[i].height < p[min_idx].height) {
            min_idx = i;
        }
    }

    printf("%s %d\n", p[min_idx].name, p[min_idx].height);

    return 0;
}