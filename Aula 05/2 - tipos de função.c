#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Sem parâmetro e sem retorno
void mensagem() {
    printf("Olá, mundo!\n");
}

// Com parâmetro e sem retorno
void mensagemPersonalizada(char nome[]) {
    printf("Olá, %s\n", nome);
}

// Sem parâmetro e com retorno
int obterNumero() {
    return rand() % 10 + 1; // sorteia entre 1 e 10
}

// Com parâmetro e com retorno
int multiplicar(int n1, int n2) {
    return n1 * n2;
}

int main() {
    srand(time(NULL)); // inicializa o gerador de números aleatórios

    mensagem();

    mensagemPersonalizada("Nícollas");

    int numero = obterNumero();
    printf("Número: %d\n", numero);

    int resultado = multiplicar(2, 3);
    printf("Resultado: %d\n", resultado);

    return 0;
}

