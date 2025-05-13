#include <stdio.h>

int main() {
    int numero = 0;

    if (numero == 0) {
        printf("O número é zero.\n");
    } else if (numero > 0) {
        printf("O número é positivo.\n");
    } else {
        printf("O número é negativo.\n");
    }

    return 0;
}