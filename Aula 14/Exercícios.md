## 📝 Exercícios 

---

### 🔹 Exercício 1 - Usano `malloc()`
**Descrição:** Escreva um programa que solicite ao usuário a quantidade de números inteiros que deseja armazenar, aloque dinamicamente um vetor com essa quantidade usando a função `malloc`, permita que o usuário preencha os valores do vetor e, ao final, exiba todos os números informados, liberando a memória alocada com `free()`.

**Exemplo de:**
- Entrada:
    ```yaml
    Quantos números deseja armazenar? 4
    Digite os 4 números:
    10 20 30 40
    ```
 
- Saída:
    ```css
    Números armazenados:
    10 20 30 40
    ```

---

### 🔹 Exercício 2 - Usano `calloc()`
**Descrição:** Crie um programa que pergunte ao usuário quantos valores do tipo `float` ele deseja armazenar, aloque dinamicamente esse espaço usando `calloc`, mostre o conteúdo inicial (que deve ser zero em todos os elementos), depois permita ao usuário preencher os valores e exiba o vetor atualizado.

**Exemplo de:**
- Entrada:
    ```yaml
    Quantos números reais deseja armazenar? 3

    Valores iniciais:
    0.0 0.0 0.0

    Digite os 3 valores reais:
    1.5 3.2 4.8
    ```
 
- Saída:
    ```css
    Valores atualizados:
    1.5 3.2 4.8
    ```

---

### 🔹 Exercício 3 - Usano `realloc()`
**Descrição:** Faça um programa que pergunte ao usuário o tamanho inicial de um vetor de inteiros, aloque esse espaço dinamicamente e permita que ele preencha os valores; em seguida, pergunte o novo tamanho desejado, redimensione o vetor com `realloc`, solicite os novos valores (caso o tamanho tenha aumentado) e mostre todos os valores armazenados ao final.

**Exemplo de:**
- Entrada:
    ```yaml
    Tamanho inicial do vetor: 3
    Digite 3 números: 
    1 2 3

    Novo tamanho desejado: 5
    Digite os 2 novos números:
    4 5
    ```
 
- Saída:
    ```css
    Vetor final:
    1 2 3 4 5
    ```

---