#include <stdio.h>

struct Person {
    char name[100];
    int height;
};

int main(void) {
    struct Person p[3];

    for (int i = 0; i < 3; i++) {
        scanf("%s %d", p[i].name, &p[i].height);
    }

    for (int i = 0; i < 3; i++) {
        printf("%s : %dcm\n", p[i].name, p[i].height);
    }

    return 0;
}