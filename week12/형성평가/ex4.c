#include <stdio.h>
#include <math.h>

typedef struct {
    int height;
    double weight;
} Body;

Body makeStudent(Body father, Body mother) {
    Body student;
    student.height = (father.height + mother.height) / 2 + 5;
    double avg_weight = (father.weight + mother.weight) / 2.0 - 4.5;
    student.weight = round(avg_weight * 10.0) / 10.0;
    return student;
}

int main(void) {
    Body father, mother;
    scanf("%d %lf", &father.height, &father.weight);
    scanf("%d %lf", &mother.height, &mother.weight);

    Body student = makeStudent(father, mother);

    printf("height : %dcm\n", student.height);
    printf("weight : %.1fkg\n", student.weight);

    return 0;
}