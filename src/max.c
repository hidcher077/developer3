#include <stdio.h>


int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2 || getchar() != '\n') {
        printf("n/a\n");
        return 1;
    }
    printf("%d\n", max(a, b));
    return 0;
}