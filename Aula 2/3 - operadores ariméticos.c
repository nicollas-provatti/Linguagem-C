#include <stdio.h>

int main() {
 
    int num1 = 5, num2 = 2;  
    int soma, sub, mult, div, resto;  // Variáveis que armazenarão os resultados das operações.

    // Operadores aritméticos básicos
    soma  = num1 + num2;          // Adição: 5 + 2 = 7
    sub   = num1 - num2;          // Subtração: 5 - 2 = 3
    mult  = num1 * num2;          // Multiplicação: 5 * 2 = 10
    div   = num1 / num2;          // Divisão inteira: 5 / 2 = 2 (o resultado é truncado para inteiro).
    resto = num1 % num2;          // Módulo (resto da divisão): 5 % 2 = 1

    // Ordem de precedência dos operadores: PEMDAS (Parênteses, Expoentes, Multiplicação e Divisão, Adição e Subtração)
    int num3 = 4, num4 = 1;
    int resultado;

    // Exemplo 1: Multiplicação tem precedência sobre a adição.
    resultado = num1 + num2 * num3;   // 5 + (2 * 4) = 5 + 8 = 11

    // Exemplo 2: Parênteses alteram a ordem das operações.
    resultado = (num1 + num2) * num3; // (5 + 2) * 4 = 7 * 4 = 28

    // Exemplo 3: Operações da esquerda para a direita com mesma precedência.
    resultado = num1 * num2 / num4 + num3; // ((5 * 2) / 1) + 4 = (10 / 1) + 4 = 10 + 4 = 14

    return 0;
}