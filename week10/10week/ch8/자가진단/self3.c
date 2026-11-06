#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;
    
    for(int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == 0) {
            break;
        }
        count++;
    }
    
    for(int i = count - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if(i > 0) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}