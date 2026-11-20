#include <stdio.h>

typedef struct {
    int x1;
    int y1;
    int x2;
    int y2;
} Rect;

int main(void) {
    Rect r1, r2, ans;

    scanf("%d %d %d %d", &r1.x1, &r1.y1, &r1.x2, &r1.y2);
    scanf("%d %d %d %d", &r2.x1, &r2.y1, &r2.x2, &r2.y2);

    ans.x1 = (r1.x1 < r2.x1) ? r1.x1 : r2.x1;
    ans.y1 = (r1.y1 < r2.y1) ? r1.y1 : r2.y1;
    ans.x2 = (r1.x2 > r2.x2) ? r1.x2 : r2.x2;
    ans.y2 = (r1.y2 > r2.y2) ? r1.y2 : r2.y2;

    printf("%d %d %d %d\n", ans.x1, ans.y1, ans.x2, ans.y2);

    return 0;
}