#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
    int odd_sum = 0;
    int odd_count = 0;
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if(i % 2 != 0) {
            sum += arr[i];
        } else {
            odd_sum += arr[i];
            odd_count++;
        }
    }
    
    double avg = (double)odd_sum / odd_count;
    
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);
    
    return 0;
}