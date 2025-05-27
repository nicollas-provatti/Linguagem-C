# 📘 Aula 7 – Array

### 🔍 O que é array ?
Um array é uma estrutura de dados que armazena **múltiplos valores** do mesmo tipo em posições sequenciais de memória. O acesso a cada elemento é feito por meio de um índice numérico, **começando do zero**.

![](https://media.geeksforgeeks.org/wp-content/uploads/20240410101419/Getting-Started-with-Array-Data-Structure.webp)

---

### 🔵 Operações com arrays

**Declaração:**
A declaração de um array em C define o tipo de dado dos elementos, o número de elementos que o array poderá armazenar e qual será o nome do array.
```c
int numeros[5];
```
A instrução acima declara um array chamado `numeros` que pode armazenar até 5 valores do tipo `int`. Isso equivale a declarar cinco variáveis inteiras separadas, mas de forma mais organizada e otimizada, permitindo trabalhar com conjuntos de dados semelhantes de maneira mais eficiente.

**Inicialização:**
A inicialização de um array pode ser feita no momento da declaração. Isso permite definir os valores iniciais dos elementos do array.
```c
int numeros[5] = {1, 2, 3, 4, 5};
```

**Acesso:**
Os elementos de um array podem ser acessados e manipulados usando o índice, que começa em 0.
```c
int numeros[5] = {1, 2, 3, 4, 5}; 
int primeiro = numeros[0];  
numeros[2] = 6;  
```
O comando `numeros[0]` acessa o primeiro elemento do array, nesse caso o valor `1` e atribui esse valor a variável `primeiro`. O próximo comando, `numeros[2] = 6`, está atribuindo um novo valor para a posição `2` do do array `numeros` que, antes era `3` e que agora será `6`.

---

### 🔵 Percorrimento e manipulação de arrays
É comum utilizar **laços** (loops) para acessar e manipular todos os elementos de um array. Isso torna o código mais enxuto e eficiente. Caso contrário, seria necessário acessar cada posição manualmente, o que seria trabalhoso e repetitivo — por exemplo, em um array com 10 elementos, seria preciso escrever o comando `nome_array[indice]` dez vezes.

**Exemplo:**
```c
for(int i = 0; i < 5; i++) {
    printf("%d ", numeros[i]);
}
```
Isso imprime todos os elementos do array `numeros`. Também é possível fazer a mesma coisa para ler os valores de um array.

```c
for(int i = 0; i < 5; i++) {
    scanf("%d", &numeros[i]);
}
```

**Exemplo completo:**
```c
#include <stdio.h>

int main() {
    int numeros[5];

    for(int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
}
```

---

### 🔵 Funções e arrays
Um tópico importante a ser adicionado é como passar arrays como parâmetros para funções. Em C, quando um array é passado para uma função, na verdade é passado o **endereço do primeiro elemento** do array (passagem por referência). Isso permite que a função modifique os elementos do array original (diferente das variáveis simples que são passadas por valor para as funções). Como os arrays são armazenados de forma contígua na memória, tendo o endereço do primeiro elemento é possível acessar todos os demais.

Para declarar uma função que recebe um array como parâmetro, utiliza-se a seguinte sintaxe. Note que, na declaração da função, você pode usar `tipo nomeArray[]` ou tipo `*nomeArray` para representar o array:

```c
void nomeDaFuncao(tipo nomeArray[], int tamanho);
void nomeDaFuncao(tipo *nomeArray, int tamanho);
```

Aqui, `tipo` é o tipo de dado do array (como `int`, `float`, `char`, etc.), `nomeArray` é o nome do array e `tamanho` é o número de elementos, passado como argumento adicional para que a função saiba quantos elementos pode acessar. Ambas as formas de declarar o parâmetro são corretas. A segunda forma (`tipo *nomeArray`) será ainda mais clara quando estudarmos sobre ponteiros.

**Exemplo:**
```c
#include <stdio.h>

// Função que recebe um array e o tamanho dele
void dobrarValores(int numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        numeros[i] = numeros[i] * 2; // dobra o valor de cada elemento
    }
}

int main() {
    int dados[5] = {1, 2, 3, 4, 5};

    printf("Antes da função:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", dados[i]);
    }

    // Chama a função passando o array
    dobrarValores(dados, 5);

    printf("\nDepois da função:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", dados[i]);
    }

    return 0;
}
```
A função `dobrarValores` recebe dois parâmetros: o array `numeros[]` e o valor `tamanho`, que representa a quantidade de elementos do array. Dentro da função, usamos um `for` para acessar cada elemento e dobrar seu valor. Como o array é passado por referência (ou seja, o endereço do primeiro elemento), qualquer modificação feita dentro da função afeta o array original no `main`.

---

### 🔵 Dicas importantes
- Sempre valide o tamanho do vetor antes de acessar posições.
- Lembre-se de que os índices começam em **zero**.
- Vetores têm tamanho fixo — uma vez declarado, não pode ser redimensionado.
- Para grandes volumes de dados, é melhor usar alocação dinâmica (veremos mais adiante).