#include <stdio.h>

int main() {
    int num1 = 5, num2 = 10;
    int resultado; 

    // Exemplo com todos os operadores relacionais

    // Igualdade
    resultado = (num1 == num2);  // Verifica se num1 é igual a num2.
    printf("%d == %d: %s\n", num1, num2, resultado ? "verdadeiro" : "falso");

    // Diferença
    resultado = (num1 != num2);  // Verifica se num1 é diferente de num2.
    printf("%d != %d: %s\n", num1, num2, resultado ? "verdadeiro" : "falso");

    // Maior que
    resultado = (num1 > num2);  // Verifica se num1 é maior que num2.
    printf("%d > %d: %s\n", num1, num2, resultado ? "verdadeiro" : "falso");

    // Maior ou igual
    resultado = (num1 >= num2);  // Verifica se num1 é maior ou igual a num2.
    printf("%d >= %d: %s\n", num1, num2, resultado ? "verdadeiro" : "falso");

    // Menor que
    resultado = (num1 < num2);  // Verifica se num1 é menor que num2.
    printf("%d < %d: %s\n", num1, num2, resultado ? "verdadeiro" : "falso");

    // Menor ou igual
    resultado = (num1 <= num2);  // Verifica se num1 é menor ou igual a num2.
    printf("%d <= %d: %s\n\n", num1, num2, resultado ? "verdadeiro" : "falso");

    // Exemplo prático de comparação
    int idadeMinima = 18;
    int idadeUsuario = 20;
    int podeEntrar = (idadeUsuario >= idadeMinima);  // Verifica se o usuário pode entrar com base na idade mínima.

    printf("Idade do usuário: %d\n", idadeUsuario);
    printf("Idade mínima exigida: %d\n", idadeMinima);
    printf("O usuário pode entrar? %s\n", podeEntrar ? "sim" : "não");

    return 0;
}
