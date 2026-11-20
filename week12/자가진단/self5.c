#include <stdio.h>
#include <string.h>

typedef struct {
    char name[21];
    int height;
    double weight;
} Person;

int main(void) {
    Person p[5];
    Person temp;

    for (int i = 0; i < 5; i++) {
        scanf("%20s %d %lf", p[i].name, &p[i].height, &p[i].weight);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(p[i].name, p[j].name) > 0) {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%s %d %.1f\n", p[i].name, p[i].height, p[i].weight);
    }

    return 0;
}