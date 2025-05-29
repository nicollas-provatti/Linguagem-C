# 📘 Aula 8 – Matriz

### 🔍 O que é matriz ?
Uma matriz é um **array multidimensional**, geralmente usado para representar tabelas ou grades de dados. Uma matriz bidimensional, por exemplo, tem elementos organizados em linhas e colunas:

![](https://media.geeksforgeeks.org/wp-content/uploads/20240416133310/Introduction-to-Matrix.webp)

---

### 🔵 Operações com matrizes

**Declaração:**
A declaração de uma matriz segue a mesma lógica do array, mas com múltiplas dimensões especificadas entre colchetes.
```c
tipo nome[linhas][colunas];
```
```c
int matriz[3][4]; // Matriz com 3 linhas e 4 colunas
```

**Inicialização:**
Você pode inicializar uma matriz de maneira similar a do array, mas com as entradas organizadas em linhas e colunas.

```c
int matriz[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
```
```c
int matriz[3][4] = { 
    {1, 2, 3, 4}, 
    {5, 6, 7, 8}, 
    {9, 10, 11, 12} 
};
```
As duas formas acima são equivalentes, mas a segunda facilita a visualização da matriz.

**Acesso:**
Para acessar um elemento específico de uma matriz, você usa **dois índices**: um para a `linha` e outro para a `coluna`. Usando a matriz do exemplo anterior:

```c
int primeiro = matriz[0][0];
```
Acessa o elemento na primeira linha e primeira coluna (valor 1). Lembrando que começamos no índice zero, então a primeira linha é representada pelo índice zero, assim como a primeira coluna.

---

### 🔵 Percorrimento e manipulação de matrizes
Assim como em **arrays unidimensionais**, **matrizes** em C também são um conjunto de dados organizados, mas com uma diferença importante: elas possuem duas dimensões (linhas e colunas). Isso significa que, para acessar e manipular todos os elementos de uma matriz, precisamos usar **dois laços**: um para iterar pelas linhas e outro para iterar pelas colunas.

**Exemplo:**
```c
for (int i = 0; i < 3; i++) {         // Laço para as linhas
    for (int j = 0; j < 4; j++) {     // Laço para as colunas
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}
```
Isso imprime todos os elementos da matriz. Também é possível fazer a mesma coisa para ler os valores de um array.

```c
for (int i = 0; i < 3; i++) {         // Laço para as linhas
    for (int j = 0; j < 4; j++) {     // Laço para as colunas
        scanf("%d", &matriz[i][j]);
    }
}
```

#### 🔹 **Mais por que usar dois laços ?**
- **Primeiro laço**: O primeiro laço (`for (int i = 0; i < 3; i++)`) percorre as linhas da matriz. Cada vez que o laço passa por uma nova iteração, ele avança para uma nova linha.

- **Segundo laço**: O segundo laço (`for (int j = 0; j < 4; j++)`) percorre as colunas de cada linha. Para cada linha, ele percorre todas as colunas.


**Exemplo completo:**
```c
#include <stdio.h>

int main() {
    int matriz[3][4]; 

    // Preenchendo a matriz com valores
    for (int i = 0; i < 3; i++) {        
        for (int j = 0; j < 4; j++) {     
            printf("Digite um número: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimindo a matriz
    for (int i = 0; i < 3; i++) {        
        for (int j = 0; j < 4; j++) {     
            printf("%d ", matriz[i][j]);
        }
        printf("\n");   // Nova linha a cada linha da matriz
    }

    return 0;
}
```

⚠️ **Importante:**
A forma correta de ler uma matriz em C (ou em qualquer outra linguagem) é da **esquerda para a direita** e de **cima para baixo**, como nos exemplos mostrados. Isso se deve à maneira como a matriz é organizada na memória e à convenção de acesso aos seus elementos.
Quando você percorre uma matriz de **cima para baixo** e da **esquerda para a direita**, você está seguindo a ordem que a matriz é armazenada na memória e a convenção mais comum de acesso aos seus elementos. Isso facilita a leitura e a manipulação dos dados, uma vez que você acessa a matriz de acordo com sua organização natural.

---