#include <stdio.h>

int main() {
    int score[5][5] = {0};

    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &score[i][j]);
            sum += score[i][j];
        }
        score[i][4] = sum;
    }

    for (int i = 0; i < 5; i++) {
        int total = score[i][4];
        double avg = (double)total / 4.0;

        printf("%d %.1f\n", total, avg);
    }

    return 0;
}