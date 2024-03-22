#include <stdio.h>

int main() {
    char name[10];
    printf("Введите ваше имя: ");
    fgets(name, 10, stdin);
    printf("Hello, %s\n", name);
    return 0;
}