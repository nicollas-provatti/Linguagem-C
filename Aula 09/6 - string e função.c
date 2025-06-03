#include <stdio.h>

void mensagem(char nome[]) {
    printf("Olá, %s", nome);
}

int main() {

    char nome[] = "Marcos";

    mensagem(nome);

    return 0;
}