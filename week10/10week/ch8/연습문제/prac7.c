#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    double avg = (double)sum / 10;
    
    printf("sum = %d\n", sum);
    printf("avg = %.1f\n", avg);
    
    return 0;
}