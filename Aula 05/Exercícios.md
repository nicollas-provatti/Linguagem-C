## 📝 Exercícios 

---

### 🔹 Exercício 1 - Área do Retângulo
**Descrição:** Cire um programa em C que contenha uma função chamada **calcularAreaRetangulo** que receba como parâmetros a **base** e a **altura** de um retângulo (valores reais) e **retorne** sua área. No programa principal, solicite os dois valores ao usuário, chame a função e exiba o resultado.

**Exemplo de:**
- Entrada:
    ```yaml
    Digite a base do retângulo: 5.5
    Digite a altura do retângulo: 3.0
    ```
 
* Saída:
    ```css
    Área do retângulo: 16.5
    ```

---

### 🔹 Exercício 2 - Mensagem Personalizada
**Descrição:** Crie um programa em C que contenha uma função que receba como parâmetros o **nome** e a **idade** de um usuário. A função deve então exibir uma mensagem personalizada no seguinte formato:

`Olá, [nome], você tem [idade] anos. Seja bem-vindo(a)!`

**Exemplo de:**
- Entrada:
    ```yaml
    Nome: Ana
    Idade: 25
    ```
 
* Saída:
    ```css
    Olá, Ana, você tem 25 anos. Seja bem-vindo(a)!
    ```

---

### 🔹 Exercício 3 - Situação do Aluno
**Descrição:** Crie uma função em C que receba como parâmetros a média final (real) e a quantidade de faltas (inteiro) de um aluno. O limite de faltas é 10. A função deve retornar a situação final do aluno, de acordo com os critérios:

- Se a média for **maior ou igual a 9.5** E as faltas **não ultrapassarem 10**, a situação é: `APROVADO COM LOUVOR`

- Se a média for **maior ou igual a 7.0** E as faltas **não ultrapassarem 10**, a situação é: `APROVADO`

- **Caso contrário**, a situação é: `REPROVADO`

**Exemplo de:**
- Entrada:
    ```yaml
    Média: 9.8
    Faltas: 6
    ```
 
* Saída:
    ```css
    Situação: APROVADO COM LOUVOR
    ```

---

### 🔹 Exercício 4 - É ano Bissexto?
**Descrição:** Crie um programa em C que leia um ano qualquer informado pelo usuário e use uma função chamada **ehBissexto** para determinar se ele é bissexto. A função deve receber um número inteiro representando o ano e retornar **verdadeiro** se for bissexto, ou **falso** caso contrário. Um ano é considerado bissexto se:

- É divisível por 4 **e não** é divisível por 100
OU
- É divisível por 400

**Exemplo de:**
- Entrada:
    ```yaml
    Digite um ano: 2024
    Digite um ano: 1900
    ```
 
* Saída:
    ```css
    2024 é um ano bissexto.
    1900 não é um ano bissexto.
    ```

---

### 🔹 Exercício 5 - Calculadora Simples 2
**Descrição:** Crie um programa em C que simule uma calculadora simples utilizando funções. O programa deve: ler **dois números inteiros** do usuário, a operação a ser realizada, de acordo com o seguinte menu: 

- **1** para soma
- **2** para subtração
- **3** para multiplicação
- **4** para divisão

chamar uma função diferente para cada operação matemática:
- somar(a, b)
- subtrair(a, b)
- multiplicar(a, b)
- dividir(a, b)

e exibir o resultado final com uma mensagem clara.

**Regras:**
- Cada função deve retornar o resultado da operação.
- A função de divisão deve verificar se o segundo número é diferente de zero antes de dividir.

**Exemplo de:**
- Entrada:
    ```yaml
    Digite o primeiro número: 12
    Digite o segundo número: 4

    Escolha a operação:
    1 - Soma
    2 - Subtração
    3 - Multiplicação
    4 - Divisão
    Opção: 4
    ```
 
* Saída:
    ```css
    Resultado da divisão: 3
    ```
    
---

