#include <stdio.h>

struct Person {
    char name[100];
    int age;
};

int main(void) {
    struct Person me = {"Yejun", 12};
    struct Person friend_p;

    scanf("%s %d", friend_p.name, &friend_p.age);

    printf("Your name: %s, age: %d\n", me.name, me.age);
    printf("Friend's name: %s, age: %d\n", friend_p.name, friend_p.age);

    return 0;
}