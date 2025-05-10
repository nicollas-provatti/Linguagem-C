#include <stdio.h>

int main() {
    int a = 1, b = 0;

    // Operadores Lógicos

    // Operador "E" (conjunção): verdadeiro somente se ambos os valores forem verdadeiros
    int E = a && b;
    printf("Operador E (a e b): %s\n", E ? "verdadeiro" : "falso");  // Saída: falso

    // Operador "OU" (disjunção): verdadeiro se pelo menos um dos valores for verdadeiro
    int OU = a || b;
    printf("Operador OU (a ou b): %s\n", OU ? "verdadeiro" : "falso");  // Saída: verdadeiro

    // Operador "NÃO" (negação): inverte o valor lógico
    int NAO_A = !a;
    int NAO_B = !b;
    printf("Operador NÃO (nao a): %s\n", NAO_A ? "verdadeiro" : "falso");  // Saída: falso
    printf("Operador NÃO (nao b): %s\n", NAO_B ? "verdadeiro" : "falso");  // Saída: verdadeiro

    // Exemplo Prático: Verificar acesso a um sistema
    int idade = 20;
    int temPermissao = 1;
    int acessoLiberado = (idade >= 18) && temPermissao;

    printf("\nExemplo Prático:\n");
    printf("Idade: %d\n", idade);
    printf("Tem permissão? %s\n", temPermissao ? "sim" : "não");
    printf("Acesso liberado? %s\n", acessoLiberado ? "sim" : "não");  // Saída: sim

    // Operador combinado: Usando "E", "OU" e "NÃO"
    int resultadoCombinado = (a && !b) || (b && !a);
    printf("\nResultado Combinado ((a e nao b) ou (b e nao a)): %s\n", resultadoCombinado ? "verdadeiro" : "falso");  // Saída: verdadeiro

    // Cenário: Verificar se uma pessoa pode votar
    int idadeEleitor = 16;
    int tituloEleitor = 0;
    int podeVotar = (idadeEleitor >= 16) && tituloEleitor;

    printf("\nCenário Prático:\n");
    printf("Idade do eleitor: %d\n", idadeEleitor);
    printf("Possui título de eleitor? %s\n", tituloEleitor ? "sim" : "não");
    printf("Pode votar? %s\n", podeVotar ? "sim" : "não");  // Saída: não

    return 0;
}
