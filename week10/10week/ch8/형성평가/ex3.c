#include <stdio.h>

int main() {
    int arr[10];
    int odd_sum = 0;
    int even_sum = 0;
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if(i % 2 == 0) {
            odd_sum += arr[i];
        } else {
            even_sum += arr[i];
        }
    }
    
    printf("odd : %d\neven : %d\n", odd_sum, even_sum);
    
    return 0;
}