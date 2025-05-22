#include <stdio.h>

void recursiva() {
    printf("Olá, mundo!\n");
    recursiva(); // recursão infinita (use com cuidado)
}

void contagem(int contador) {
    printf("%d\n", contador);
    contagem(contador + 1); // também recursão infinita
}

int main() {
    // recursiva();
    // contagem(0);
    return 0;
}