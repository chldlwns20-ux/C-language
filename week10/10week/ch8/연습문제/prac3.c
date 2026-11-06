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
    
    for(int i = 1; i < count; i += 2) {
        printf("%d", arr[i]);
        if(i + 2 < count) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}