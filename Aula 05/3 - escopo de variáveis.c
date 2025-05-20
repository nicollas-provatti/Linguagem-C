#include <stdio.h>

int n1 = 5;

void rotina(int n2) {
    printf("n1: %d\n", n1);
    printf("n2: %d\n", n2);
}

int main() {
    int n2 = 10;
    printf("n1: %d\n", n1);
    printf("n2: %d\n", n2);
    rotina(n2);

    return 0;
}
