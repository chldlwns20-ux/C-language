#include <stdio.h>

typedef struct {
    char name[101];
    char tel[101];
    char addr[101];
} Info;

int main(void) {
    Info data;
    scanf("%100s %100s %100s", data.name, data.tel, data.addr);
    printf("name : %s\n", data.name);
    printf("tel : %s\n", data.tel);
    printf("addr : %s\n", data.addr);
    return 0;
}