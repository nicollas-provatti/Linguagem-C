# 📘 Aula 6 – Função 2

### 🔍 O que é recursão
A recursão é uma técnica poderosa e elegante em programação, que consiste em uma função chamar a si mesma para resolver um problema. Vamos explorar como ela funciona, seus componentes, e aplicá-la em exemplos clássicos.

**Exemplo simples:**
```c
void contar(int n) {
    printf("%d\n", n);
    contar(n + 1);
}
```

A função `contar()` chama a si mesma, o que caracteriza uma **recursão**. No entanto, como não há uma condição de parada, essa chamada se repete indefinidamente, fazendo com que o código entre em **loop recursivo**, eventualmente levando a um erro de estouro de pilha (stack overflow). A seguir, vamos abordar como resolver esse problema utilizando uma **condição de parada**, que é essencial para garantir que a recursão termine corretamente.

---

### 🔵 Elementos da recursão
Para que uma função recursiva funcione corretamente, dois elementos são essenciais:

#### 🔹 **Caso base:**
Define a **condição de parada** da recursão. Evita chamadas infinitas.

#### 🔹 **Passo recursivo:**
É a parte da função que **chama a si mesma** com um problema menor.

**Exemplo:**
```c
#include <stdio.h>

int contar(int n) {
    if (n > 5) {
        return;
    }
    printf("%d\n", n);
    contar(n + 1);
}

int main() {
    contar(0); // Saída: 0 1 2 3 4 5
    return 0;
}
```

Esse exemplo mostra como a **recursão** pode ser usada de forma correta, com os dois elementos essenciais: o **caso base** e o **passo recursivo**. A função `contar(int n)` imprime o valor de n e em seguida chama a si mesma com `n + 1`. O **caso base** está na condição `if (n > 5)`, que interrompe a recursão quando n ultrapassa 5, evitando que o código entre em um loop infinito. Já o **passo recursivo** é a chamada `contar(n + 1)`, que reduz o problema original (contar a partir de um número) em passos menores até atingir o caso base. Com isso, a função imprime os números de `0` até `5` e para de se chamar, encerrando corretamente o processo recursivo.

---

### 🔵 Pilha de recursão
Cada chamada recursiva é empilhada na **pilha de execução** do sistema, como se fosse uma nova função.
Quando o caso base é alcançado, as chamadas começam a retornar uma a uma, de forma **LIFO** (Last In, First Out – último a entrar, primeiro a sair).

**Exemplo:**
```c
#include <stdio.h>

int contar(int n) {
    if (n > 5) {
        return;
    }
    contar(n + 1);
    printf("%d\n", n);
    
}

int main() {
    contar(0); // Saída: 5 4 3 2 1 0
    return 0;
}
```

Nesse novo exemplo, a função `contar(int n)` continua sendo recursiva e possui um **caso base** (`if (n > 5)`) que interrompe a recursão quando `n` passa de 5. No entanto, agora a chamada recursiva `contar(n + 1)` vem **antes** do `printf("%d\n", n)`. Isso faz com que todas as chamadas sejam empilhadas **antes** de qualquer valor ser impresso. Como as chamadas recursivas ficam armazenadas na **pilha de execução**, elas só começam a ser resolvidas quando o caso base é atingido, e então as instruções após a chamada (neste caso, o `printf`) começam a ser executadas na **ordem inversa** — ou seja, do último valor chamado até o primeiro. Isso reflete o comportamento da pilha, que funciona no modo **LIFO**  Por isso, a saída será:
```
5
4
3
2
1
0
```
mostrando que os valores são impressos na volta da recursão, em ordem decrescente.

---

### 🔵 Exemplos Clássicos

#### 🔹 **Fatorial:**
O **fatorial** de um número natural `n` (representado por `n!`) é o produto de todos os números inteiros positivos de `1` até `n`. Por exemplo:

- `5! = 5 × 4 × 3 × 2 × 1 = 120`
- Por definição, `0! = 1`.

A fórmula para encontrar o fatorial de `n` é `n * (n - 1)!`.
O algoritmo abaixo usa **recursão** para calcular o fatorial de um número:
```c
int fatorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fatorial(n - 1); 
}
```
Esse código define uma função recursiva chamada `fatorial`. A função verifica se `n` é igual a 0 — esse é o **caso base**, que interrompe a recursão e retorna `1` (já que `0! = 1`). Se `n` for diferente de 0, a função retorna `n` multiplicado pelo fatorial de `n - 1`.

A recursão funciona como uma forma de "quebrar" o problema em subproblemas menores. Por exemplo, se chamarmos `fatorial(3)`, o processo será:

- `fatorial(3)`
    → retorna `3 * fatorial(2)`

- `fatorial(2)`
    → retorna `2 * fatorial(1)`

- `fatorial(1)`
    → retorna `1 * fatorial(0)`

- `fatorial(0)`
    → retorna `1` (caso base)

A partir daí, a pilha de chamadas vai sendo resolvida na volta da recursão:

- `fatorial(1)` = `1 * 1 = 1`

- `fatorial(2)` = `2 * 1 = 2`

- `fatorial(3)` = `3 * 2 = 6`

Esse método mostra como a **recursão** permite resolver o fatorial de `n` com base nos fatoriais menores (`n-1`, `n-2`...), até chegar no mais simples (`0!`).


#### 🔹 **Fibonacci:**
A **sequência de Fibonacci** é uma sequência numérica onde:
```r
F(0) = 0  
F(1) = 1  
F(n) = F(n-1) + F(n-2)  (para n > 1)
```
Ou seja, cada termo da sequência é a soma dos dois anteriores.

Exemplo:
```r
F(0) = 0  
F(1) = 1  
F(2) = 1  → 1 + 0  
F(3) = 2  → 1 + 1  
F(4) = 3  → 2 + 1  
F(5) = 5  → 3 + 2  
```

O algoritmo abaixo usa **recursão** para calcular um termo da sequência de fibonacci:
```c
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) { 
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
```
Essa função `fibonacci` calcula o enésimo número da sequência de Fibonacci usando recursão.

- O **caso base** ocorre quando `n` é 0 ou 1.
    - `fibonacci(0)` retorna 0
    - `fibonacci(1)` retorna 1

- O `passo recursivo` é a chamada:
```c
fibonacci(n) = fibonacci(n - 1) + fibonacci(n - 2)
```

Por exemplo, se chamarmos `fibonacci(4)`, o processo será:

```c
fibonacci(4)
→ fibonacci(3) + fibonacci(2)
→ (fibonacci(2) + fibonacci(1)) + (fibonacci(1) + fibonacci(0))
→ ((fibonacci(1) + fibonacci(0)) + 1) + (1 + 0)
→ ((1 + 0) + 1) + (1 + 0)
→ (1 + 1) + 1
→ 2 + 1 = 3
```

Ou seja, `fibonacci(4) = 3`
A recursão vai “quebrando” o problema em partes menores até alcançar os **casos base** (`fibonacci(0)` e `fibonacci(1)`), e depois essas chamadas vão sendo resolvidas **de baixo para cima**, formando o resultado final.

---