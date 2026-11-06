#include <stdio.h>

int main() {
    double scores[] = {0.0, 85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    printf("%.1f\n", scores[a] + scores[b]);
    
    return 0;
}