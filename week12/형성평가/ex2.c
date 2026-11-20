#include <stdio.h>
#include <string.h>

typedef struct {
    char name[101];
    char tel[101];
    char addr[101];
} Info;

int main(void) {
    Info arr[3];
    int idx = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%100s %100s %100s", arr[i].name, arr[i].tel, arr[i].addr);
    }

    for (int i = 1; i < 3; i++) {
        if (strcmp(arr[i].name, arr[idx].name) < 0) {
            idx = i;
        }
    }

    printf("name : %s\n", arr[idx].name);
    printf("tel : %s\n", arr[idx].tel);
    printf("addr : %s\n", arr[idx].addr);

    return 0;
}