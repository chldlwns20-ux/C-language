#include <stdio.h>

typedef struct {
    double x;
    double y;
} Point;

int main(void) {
    Point p1, p2, center;

    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);

    center.x = (p1.x + p2.x) / 2.0;
    center.y = (p1.y + p2.y) / 2.0;

    printf("Center point = (%.1f, %.1f)\n", center.x, center.y);

    return 0;
}