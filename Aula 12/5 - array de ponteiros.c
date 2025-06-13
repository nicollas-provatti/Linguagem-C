#include <stdio.h>

int main() {

    int a = 10, b = 20, c = 30;

    int *array[3];

    array[0] = &a;
    array[1] = &b;
    array[2] = &c;

    for (int i = 0; i < 3; i++) {
        printf("%p\n", array[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("%p\n", *array[i]);
    }

    return 0;
}