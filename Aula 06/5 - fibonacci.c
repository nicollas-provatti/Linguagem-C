#include <stdio.h>

/*
0 1 1 2 3 5 8 13

t(n) = t(n - 1) + t(n - 2)

t(5) = t(4) + t(3)
*/

/*

4 fibo(1): retorne 1
3 fibo(3): res = fibo(1) + fibo(1) || fibo(1) e retorne res
2 fibo(4): res = fibo(3) + fibo(2) || fibo(2) e retorne res
1 fibo(5): res = fibo(4) + fibo(3) || fibo(3) e retorne res

*/

int fibonacci(int numero) {
    if (numero == 1) return 0;
    if (numero == 2) return 1;

    return fibonacci(numero - 1) + fibonacci(numero - 2);
}

int main() {
    int numero;

    printf("Termo da sequência de fibonacci: ");
    scanf("%d", &numero);

    int resultado = fibonacci(numero);

    printf("O %dº termo da sequência é %d.\n", numero, resultado);
    return 0;
}