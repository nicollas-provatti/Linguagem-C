# 📘 Aula 13 - Alocação Dinâmica

### 🔵 O que é alocação dinâmica ?
A **alocação dinâmica de memória** é o processo de reservar espaço na memória **durante a execução do programa**, em vez de definir antecipadamente (em tempo de compilação) o quanto será utilizado. Isso oferece **flexibilidade** para trabalhar com quantidades variáveis de dados e permite que programas se adaptem a diferentes cenários de uso.

Em C, isso é feito através de funções da biblioteca padrão que manipulam diretamente a memória do computador. Ao contrário da **alocação estática**, onde o espaço é fixo e limitado (como em arrays com tamanho definido), a alocação dinâmica permite:

- Criar variáveis ou estruturas de dados cujo tamanho só é conhecido em **tempo de execução**;

- Economizar memória, usando apenas o necessário;

- Reutilizar e liberar espaços de memória conforme o programa evolui;

- Criar estruturas de dados dinâmicas como listas encadeadas, árvores, filas e muito mais.

**Por que usar alocação dinâmica?:**
 Imagine um programa que lê notas de alunos. Com arrays estáticos, precisaríamos definir um limite máximo de alunos (por exemplo, `float notas[100];`). E se tivermos 500? Ou só 12? Isso desperdiça memória ou impede o funcionamento. Com alocação dinâmica, podemos ajustar o espaço exatamente ao necessário.

---

### 🔵 A biblioteca `<stdlib.h>`:

A biblioteca <stdlib.h> (standard library header) é uma das bibliotecas padrão da linguagem C. Quando usamos recursos como alocar memória em tempo de execução — algo que não é possível com variáveis estáticas ou arrays de tamanho fixo — precisamos incluir essa biblioteca no início do programa com:

```c
#include <stdlib.h>
```

Essa inclusão é obrigatória sempre que for usada qualquer função de alocação dinâmica, pois é onde essas funções são declaradas.

--- 

### 🔵 **A função `malloc()`:**
A função `malloc()` (memory allocation) é utilizada para alocar dinamicamente um bloco de memória contínuo no heap (área da memória usada para alocação dinâmica). Ela pertence à biblioteca `<stdlib.h>` e retorna um **ponteiro para o início da área alocada**.

**Sintaxe:**
```c
void *malloc(size_t tamanho);
```

- `tamanho`: número de bytes que se deseja alocar.
- Retorno: um ponteiro do tipo `void *` (um ponteiro genérico), que geralmente é convertido para o tipo de dado desejado.

**Exemplo:**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;

    // Aloca memória para 5 inteiros
    vetor = (int *)malloc(5 * sizeof(int));

    if (vetor == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1;
    }

    // Inicializa e imprime os valores
    for (int i = 0; i < 5; i++) {
        vetor[i] = i * 10;
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // Libera a memória alocada
    free(vetor);

    return 0;
}
```

**Observações:**
- **Conversão do tipo**: o ponteiro retornado por `malloc()` é do tipo `void *`, então é comum fazer um cast para o tipo desejado, como (`int *`).
<br>
- **Verificação de erro**: sempre verifique se o retorno de `malloc()` é `NULL`, o que indica que a alocação falhou.
<br>
- **Liberação da memória**: a memória alocada com `malloc()` não é liberada automaticamente. É responsabilidade do programador usar `free()` para evitar vazamentos de memória.

---

### 🔵 A função `calloc()`
A função `calloc()` (de contiguous allocation) é utilizada para alocar dinamicamente um bloco de memória para um vetor, inicializando todos os bytes com **zero**. Ela é uma alternativa à `malloc()`, porém com dois diferenciais:

1. Você especifica **quantos elementos** quer alocar;
2. A memória já vem **zerada**, o que evita valores-lixo.

**Sintaxe:**
```c
void* calloc(size_t num, size_t size);
```

- `num`: quantidade de elementos que você deseja alocar;

- `size`: tamanho de cada elemento (normalmente com `sizeof(tipo)`).

A função retorna um ponteiro `void*` para o início da área alocada. Você deve fazer o casting para o tipo adequado.

**Exemplo:**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;

    // Aloca memória para 5 inteiros e inicializa com 0
    vetor = (int*) calloc(5, sizeof(int));

    if (vetor == NULL) {
        printf("Erro de alocação.\n");
        return 1;
    }

    // Exibe o conteúdo do vetor
    for (int i = 0; i < 5; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    // Libera a memória alocada
    free(vetor);

    return 0;
}
```

---

### 🔵 A função `realloc()`
Quando você precisa aumentar ou diminuir o tamanho de um bloco de memória alocado com `malloc()`, `calloc()` ou até mesmo `realloc()`, você pode usar `realloc()` para ajustar esse tamanho sem perder os dados já armazenados.

**Sintaxe:**
```c
ponteiro = realloc(ponteiro_antigo, novo_tamanho);
```

- `ponteiro_antigo`: ponteiro para a memória já alocada anteriormente;

- `novo_tamanho`: novo tamanho (em bytes) que se deseja para a memória.

A função `realloc()` tenta realocar o bloco para o novo tamanho. Se conseguir, retorna o novo endereço (pode ser o mesmo ou diferente). Caso contrário, retorna `NULL`, e o ponteiro antigo **continua válido** (por isso, sempre é bom salvar o resultado de `realloc()` em um ponteiro temporário primeiro).


**Exemplo:**

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = malloc(3 * sizeof(int));

    if (v == NULL) {
        printf("Erro de alocação inicial.\n");
        return 1;
    }

    for (int i = 0; i < 3; i++)
        v[i] = i + 1;

    // Redimensionando o vetor para 5 posições
    int *temp = realloc(v, 5 * sizeof(int));

    if (temp != NULL) {
        v = temp; // Atualiza o ponteiro original
        v[3] = 4;
        v[4] = 5;

        for (int i = 0; i < 5; i++)
            printf("%d ", v[i]);
    } else {
        printf("Erro ao realocar memória.\n");
    }

    free(v);
    return 0;
}
```

**Observações:**
- Sempre teste se `realloc()` retornou `NULL` antes de sobrescrever o ponteiro original;

- Se `realloc()` aumentar o tamanho, os novos espaços alocados **não são inicializados**;

- Se `realloc()` reduzir, os dados além do novo tamanho são perdidos.

---

### 🔵 A função `free()`
Sempre que usamos `malloc()`, `calloc()` ou `realloc()` para alocar memória dinamicamente, essa memória permanece alocada até o final do programa ou até que seja explicitamente liberada. Se não for liberada, ocorre o que chamamos de **vazamento de memória** (memory leak).

A função `free()` serve exatamente para **liberar a memória que foi alocada dinamicamente**, permitindo que o sistema a reutilize.

**Sintaxe:**
```c
free(ptr);
```

- `ptr` é o ponteiro que aponta para a memória que foi alocada dinamicamente;

- A função **não retorna nenhum valor**.

Após liberar a memória, **é uma boa prática** definir o ponteiro como `NULL` para evitar acessos acidentais a um endereço de memória inválido (ponteiro danificado, ou dangling pointer).

**Exemplo:**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*) malloc(5 * sizeof(int));

    if (p == NULL) {
        printf("Erro de alocação.\n");
        return 1;
    }

    // Uso do ponteiro
    for (int i = 0; i < 5; i++) {
        p[i] = i * 2;
        printf("%d ", p[i]);
    }

    // Libera a memória
    free(p);
    p = NULL; // Boa prática!

    return 0;
}
```

**Observações:**
- Nunca use `free()` em um ponteiro que não tenha sido alocado dinamicamente;

- Não use `free()` mais de uma vez no mesmo ponteiro sem reatribuir;

- Nunca acesse a memória depois de ter dado `free()` — isso causa comportamento indefinido.

---