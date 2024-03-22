#include <stdio.h>
#include <math.h>

int main() {
    double x, y;

    printf("Введите координаты точки x и y: ");
    if (scanf("%lf %lf", &x, &y) != 2) {
        printf("n/a\n");
        return 1;
    }

    double distance = sqrt(x * x + y * y);
    if (distance < 5) {
        printf("GOTCHA\n");
    } else {
        printf("MISS\n");
    }

    return 0;
}