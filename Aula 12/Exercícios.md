## 📝 Exercícios 

---

### 🔹 Exercício 1 - Modificando Variáveis
**Descrição:** Escreva um programa em C que use ponteiros para alterar o valor de uma variável com base na entrada do usuário. O usuário deve informar um valor original e um novo valor. O ponteiro deve ser usado para modificar a variável original com o novo valor informado, e os dois valores devem ser exibidos.


**Exemplo de:**
- Entrada:
    ```yaml
    Digite o valor original: 10
    Digite o novo valor: 50
    ```
 
- Saída:
    ```css
    Valor original: 10
    Novo valor após a modificação via ponteiro: 50
    ```
---

### 🔹 Exercício 2 - Trocando Valores
**Descrição:** Crie uma função chamada `trocar()` que receba dois ponteiros para inteiros e troque os valores apontados por eles. No `main()`, leia dois inteiros, chame a função `trocar()` e exiba os valores trocados.

**Exemplo de:**
- Entrada:
    ```yaml
    Digite o valor 1: 10
    Digite o valor 2: 20
    ```
 
- Saída:
    ```css
    Valor 1: 20
    Valor 2: 10
    ```

---

### 🔹 Exercício 3 -  Calculadora
**Descrição:** Crie uma função chamada `calcular()` que receba dois números e dois ponteiros para `float` onde serão armazenados o resultado da soma e da multiplicação. No `main()`, leia dois números, chame a função e imprima os resultados.


**Exemplo de:**
- Entrada:
    ```yaml
    Digite o primeiro número: 3.5
    Digite o seguno número: 2.5
    ```
 
* Saída:
    ```css
    Soma: 5.5
    Multiplicação: 7.0
    ```
---

### 🔹 Exercício 4 - Classificação de IMC 
**Descrição:** Crie uma função chamada `classificarIMC()` que receba como parâmetros o peso (float) e a altura (float) de uma pessoa. A função deve calcular o IMC e retornar uma string com a classificação, conforme a tabela abaixo:

| IMC                | Classificação        |
|--------------------|---------------------|
| Menor que 18.5     | Abaixo do peso      |
| 18.5 a 24.9        | Peso normal         |
| 25.0 a 29.9        | Sobrepeso           |
| 30.0 a 34.9        | Obesidade grau 1    |
| 35.0 a 39.9        | Obesidade grau 2    |
| 40.0 ou mais       | Obesidade grau 3    |


A função deve retornar um `char*` apontando para a mensagem correspondente. No main(), leia o peso e altura, chame a função e imprima a classificação retornada.


**Exemplo de:**
- Entrada:
    ```yaml
    Peso: 80
    Altura: 1.75
    ```
 
* Saída:
    ```css
    Classificação: Sobrepeso
    ```
---
