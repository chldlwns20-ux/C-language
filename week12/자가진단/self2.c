#include <stdio.h>

struct School {
    char name[100];
    int grade;
};

int main(void) {
    struct School s1 = {"Jejuelementary", 6};
    struct School s2;

    scanf("%s %d", s2.name, &s2.grade);

    printf("%d grade in %s School\n", s1.grade, s1.name);
    printf("%d grade in %s School\n", s2.grade, s2.name);

    return 0;
}