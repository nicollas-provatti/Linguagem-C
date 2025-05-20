#include <stdio.h>

int main() {

    int numero = 10;

    dobrar(numero);

    printf("Número: %d\n", numero);

    return 0;
}

void dobrar(int numero) {
    numero = numero * 2;
}

