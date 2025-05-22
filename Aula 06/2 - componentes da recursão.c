#include <stdio.h>

void contagem(int contador) {
    if (contador > 100) { // Caso base
        printf("Fim da contagem\n");
        return;
    }

    printf("%d\n", contador);
    contagem(contador + 1); // Passo recursivo
    // Instrução
}

int main() {
    contagem(1);
    return 0;
}