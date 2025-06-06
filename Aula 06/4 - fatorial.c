#include <stdio.h>

/*
0! = 1
1! = 1
2! = 2 * 1 = 2
3! = 3 * 2 * 1 = 6
4! = 4 * 3 * 2 * 1 = 24
.
.
.
n! = n * (n - 1)!

5! = 5 * 4! = 5 * 24 = 120
*/


/*
5 fat(1): n = 1; retorne 1
4 fat(2): n = 2; res = 2 * fat(1) || retorne res
3 fat(3): n = 3; res = 3 * fat(2) || retorne res
2 fat(4): n = 4; res = 4 * fat(3) || retorne res
1 fat(5): n = 5; res = 5 * fat(4) || retorne res
*/

int fatorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1;
    }

    return numero * fatorial(numero - 1);
}

int main() {
    int numero;

    printf("Calcular o fatorial de: ");
    scanf("%d", &numero);

    int resultado = fatorial(numero);

    printf("O fatorial de %d é %d\n", numero, resultado);
    return 0;
}