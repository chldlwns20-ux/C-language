#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;
    int max, min;
    
    for(int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == 0) {
            break;
        }
        count++;
    }
    
    max = arr[0];
    min = arr[0];
    
    for(int i = 1; i < count; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("%d\n", max - min);
    
    return 0;
}