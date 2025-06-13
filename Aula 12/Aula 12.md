# 📘 Aula 12 - Ponteiro

### 🔵 O que são ponteiros ?
Ponteiros são variáveis que armazenam o **endereço de memória** de outras variáveis. Eles são fundamentais para manipulação eficiente de dados, passagem por referência, alocação dinâmica e estruturação de dados mais complexos.

---

### 🔵 Operações com ponteiros

**Declaração:**
Para declarar um ponteiro em C, você deve especificar o tipo de dado para o qual ele aponta, seguido de um **asterisco (*)** e o nome do ponteiro. O tipo de dado do ponteiro deve ser o mesmo tipo da variável cujo endereço ele armazenará.

```c
int *ptr;  // Ponteiro para um inteiro
```
Nesse exemplo, `ptr`é um ponteiro que armazena o endereço de uma valor inteiro.

**Atribuição:**
Após declarar um ponteiro, você pode armazenar dentro dele o **endereço de memória** de uma variável compatível com seu tipo. Isso pode ser feito utilizando o operador `&` para obter o endereço da variável.

```c
int numero;
ptr = &numero;
```

Nesse exemplo, unsamos o ponteiro `ptr` declarado no primeiro exemplo para guardar o endereço da variável `numero`.

**Inicialização:**
Após declarar um ponteiro, você pode inicializá-lo, atribuindo o endereço de uma variável a ele.

```c
int numero = 10
int *ptr = &numero;
```

Nesse exemplo, o ponteiro `ptr` está inicializado com o endereço da variável `numero`. Agora, `ptr` pode ser usado para acessar ou modificar o valor de `numero` indiretamente.

⚠️ **Importante:**
Inicializar ponteiros é uma boa prática essencial em C, pois evita comportamentos indefinidos no programa. Se um ponteiro não for inicializado, ele pode conter um endereço aleatório da memória (lixo), e qualquer tentativa de acessar ou modificar esse endereço pode causar erros graves, como falhas de segmentação.

Uma forma segura de inicializar ponteiros quando ainda não se tem um endereço válido é atribuir `NULL`:

```c
int *ptr = NULL;
```


**Acesso:**
Uma vez que um ponteiro armazena o endereço de uma variável, você pode acessar o valor contido nesse endereço utilizando o **operador *** (conhecido como operador de **desreferência**).

```c
int numero = 10;
int *ptr = &numero;

printf("%d\n", *ptr);  // Saída: 10
```

---
Nesse exemplo, `*ptr` desreferencia o ponteiro, acessando o valor armazenado no endereço contido em `ptr`. Isso significa que `*ptr` retorna o valor de `numero`.

<br>

**Modificação:**
Os ponteiros também permitem modificar o valor de uma variável sem acessá-la diretamente, apenas manipulando seu endereço de memória.

```c
int numero = 10;
int *ptr = &numero;

*ptr = 20;

printf("%d\n", numero);  // Saída: 20
```
Nesse exemplo, o valor de `numero` foi modificado para `20` usando o ponteiro `ptr`, sem que `numero` fosse diretamente alterado no código.

---

### 🔵 Passagem por referência
Na passagem por referência, a função recebe o endereço da variável em vez de uma cópia do seu valor. Isso permite que a função acesse e modifique diretamente a variável original, já que trabalha com o endereço de memória da variável.

**Exemplo:**
```c
#include <stdio.h>

void dobrar(int *numero) {
    *numero = *numero * 2;
}

int main() {
    int numero = 5;

    dobrar(&numero);

    printf("%d\n", numero);  // Saída: 10
    return 0;
}
```

Nesse exemplo, ao passar o endereço de `numero` para a função `dobrar()`, a função recebe um ponteiro (`numuro`) que aponta para `numero`(variável declarada na `main`). Ao modificar o valor apontado por num dentro da função (`*numero`), estamos, na verdade, modificando diretamente a variável `numero` no programa principal. Dessa forma, o valor de `numero` é alterado de 5 para 10.

**Exemplo de passagem por valor:**
```c
void dobrar(int numero) {
    numero = numero * 2;
}

int main() {
    int numero = 5;

    dobrar(numero);

    printf("%d\n", numero);  // Saída: 5
    return 0;
}
```

Nesse exemplo, como usamos a passagem por valor o valor da variável `numero` não foi alterado.

---

### 🔵 Ponteiros e arrays
Ponteiros e arrays estão intimamente relacionados em C, já que o nome de um array é essencialmente um ponteiro para o primeiro elemento desse array. Isso significa que podemos utilizar ponteiros para navegar por arrays, acessar e modificar seus elementos, o que é uma das características mais poderosas dos ponteiros. Nesta seção, veremos como ponteiros e arrays interagem e como podemos tirar proveito dessa relação.

#### 🔹 **Relação entre arrays e ponteiros:**

Quando você declara um array, o nome do array representa o endereço do primeiro elemento desse array. Por exemplo, ao declarar:

```c
int array[5] = {10, 20, 30, 40, 50};
```
Aqui, `array` é um ponteiro para `array[0]`, o que significa que `array` armazena o endereço do primeiro elemento do `array`. Consequentemente, o valor de `array` é equivalente a `&array[0]`. Podemos utilizar um ponteiro para acessar e manipular os elementos do `array`.

**Exemplo:**
```c
int array[5] = {10, 20, 30, 40, 50};
int *ptr = array; 

printf("Primeiro elemento: %d\n", *ptr); // Saída: 10
```

#### 🔹 **Navegação em arrays com ponteiros:**
Uma das vantagens de usar ponteiros com arrays é que você pode facilmente navegar pelo array utilizando aritmética de ponteiros. Ao incrementar o ponteiro, ele passa a apontar para o próximo elemento do array, e ao decrementá-lo, ele aponta para o elemento anterior.

**Exemplo:**
```c
int array[5] = {10, 20, 30, 40, 50};
int *ptr = array; 

for (int i = 0; i < 5; i++) {
    printf("%d\n", *(ptr + i));
}
```
Nesse exemplo, o `*(ptr + i)` é utilizado para acessar os elementos de `array` usando aritmética de ponteiros. O ponteiro `ptr` aponta inicialmente para o primeiro elemento do array, e ao adicionar `i`, obtemos o endereço de outros elementos subsequentes.

#### 🔹 **Arrays multidimensionais e ponteiros:**
Os arrays multidimensionais são arrays de arrays, e podem ser acessados de maneira eficiente utilizando ponteiros. A ideia é semelhante à manipulação de arrays unidimensionais, mas com ponteiros que apontam para arrays em vez de valores individuais.

**Exemplo:**
```c
int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

int *ptr = &matriz[0][0];

for (int i = 0; i < 9; i++) {
    printf("%d ", *(ptr + i));
}
```

Nesse exemplo, estamos utilizando um ponteiro para percorrer todos os elementos da `matriz`. Aqui, `ptr` aponta para o primeiro elemento da matriz (`mat[0][0]`), e ao incrementá-lo, acessamos os elementos subsequentes.

#### 🔹 **Arrays de ponteiros:**
Também é possível declarar arrays de ponteiros, nos quais cada elemento do array é um ponteiro que pode apontar para diferentes variáveis ou elementos. Isso é útil quando você precisa armazenar endereços de múltiplas variáveis ou mesmo strings, que em C são arrays de caracteres.

```c
int a = 10, b = 20, c = 30;
int *array[3];  // Array de ponteiros

array[0] = &a;
array[1] = &b;
array[2] = &c;

for (int i = 0; i < 5; i++) {
    printf("%d\n", *array[i]);
}
```

Nesse exemplo, `array`é um array de ponteiros para `int`, onde cada ponteiro armazena o endereço de uma variável (`a`, `b`, `c`). O loop imprime os valores apontados por cada ponteiro no array.


---

### 🔵 Ponteiros para ponteiros
Um ponteiro para ponteiro, como o nome sugere, é um ponteiro que armazena o endereço de outro ponteiro. Em vez de apontar diretamente para um valor, ele aponta para a localização de outro ponteiro que, por sua vez, aponta para o valor desejado.


**Declaração:**
Em C, um ponteiro para ponteiro é declarado adicionando mais um **asterisco *** à declaração, indicando o nível extra de indireção. Um ponteiro de nível único armazena o endereço de uma variável; já um ponteiro de nível duplo armazena o endereço de um ponteiro.

```c
int numero = 10; 
int *ptr = &numero;   // 'ptr' aponta para 'numero' 
int **pptr = &ptr; // 'pptr' aponta para 'ptr'
```
Nese exemplo, `ptr` é um ponteiro que armazena o endereço de `numero`, enquanto `pptr` é um ponteiro para ponteiro, armazenando o endereço de `ptr`.


#### 🔹 **Acessando Valores Usando Ponteiros para Ponteiros:**
Para acessar o valor original de uma variável usando um ponteiro para ponteiro, é necessário realizar a desreferência em **dois níveis**. O primeiro nível fornece o ponteiro, e o segundo nível fornece o valor original.

```c
int numero = 10;
int *ptr = &numero;
int **pptr = &ptr;

printf("%d\n", numero);  // Saída: 10
printf("%d\n", *ptr);    // Saída: 10
printf("%d\n", **pptr);  // Saída: 10
```

Nesse exemplo, `**pptr` permite o acesso ao valor de `numero` através de **dois níveis** de indireção. Esse mecanismo de ponteiros aninhados pode ser especialmente útil quando manipulamos arrays multidimensionais ou estruturas complexas.

---

