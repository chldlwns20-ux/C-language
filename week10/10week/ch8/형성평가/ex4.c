#include <stdio.h>

int main() {
    double weights[6];
    double sum = 0;
    
    for(int i = 0; i < 6; i++) {
        scanf("%lf", &weights[i]);
        sum += weights[i];
    }
    
    printf("%.1f\n", sum / 6);
    
    return 0;
}