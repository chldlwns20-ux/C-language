#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int r = 0; r < 2 * n - 1; r++) {
        int start, end;
        if (r < n) {
            start = 0;
            end = r;
        } else {
            start = r - n + 1;
            end = n - 1;
        }

        
        for (int j = 0; j < start; j++) {
            printf("  ");
        }
        
        for (int j = start; j <= end; j++) {
            printf("# ");
        }
       
        if (r < 2 * n - 2) {
            printf("\n");
        }
    }

    return 0;
}