#include <stdio.h>

void dobrar(int *numero) {
    *numero *= 2;
}

int main() {

    int numero = 10;
    
    dobrar(&numero);

    printf("Número: %d\n", numero);

    return 0;
}