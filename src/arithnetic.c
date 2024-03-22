#include <stdio.h>

int main() {
    int num1, num2;
    if(scanf("%d %d", &num1, &num2) != 2) {
        printf("n/a");
        return 0;
    }
    if(num2 != 0){
        printf("%d %d %d", num1 + num2, num1 - num2, num1 * num2);
        if(num1 % num2 == 0){
            printf(" %d", num1 / num2);
        } else {
            printf(" %.2f", (float)num1 / num2);
        }
    } else {
        printf("n/a");
    }
    if(!(num1 + num2) && !(num1 - num2) && !(num1 * num2) && !(num1 / num2)){
        printf("n/a");
    }
    return 0;
}