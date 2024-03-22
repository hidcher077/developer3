#include <stdio.h>
#include <math.h>

int main() {
    float x;
    if (scanf("%f", &x) != 1 || getchar() != '\n') {
        printf("n/a\n");
        return 1;
    }
    printf("%.1f\n", 7e-3 * pow(x, 4) + ((22.8 * pow(x, 1.0 / 3.0) - 1e3) * x + 3) / (pow(x, 2) / 2) - x * pow(10 + x, 2.0 / x) - 1.01);
    return 0;
}

