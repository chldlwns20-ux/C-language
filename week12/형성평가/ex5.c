#include <stdio.h>

typedef struct {
    char name[21];
    int score[3];
    int total;
} Student;

void input(Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%20s %d %d %d", arr[i].name, &arr[i].score[0], &arr[i].score[1], &arr[i].score[2]);
        arr[i].total = arr[i].score[0] + arr[i].score[1] + arr[i].score[2];
    }
}

void sort(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i].total < arr[j].total) {
                Student temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void output(Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d %d\n", arr[i].name, arr[i].score[0], arr[i].score[1], arr[i].score[2], arr[i].total);
    }
}

int main(void) {
    int n;
    scanf("%d", &n);

    Student arr[10];
    input(arr, n);
    sort(arr, n);
    output(arr, n);

    return 0;
}