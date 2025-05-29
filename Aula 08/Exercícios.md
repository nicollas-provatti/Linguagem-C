## 📝 Exercícios 

---

### 🔹 Exercício 1 - Soma de uma Matriz
**Descrição:** Crie um programa em C que leia 9 números inteiros e armazene eles em uma matriz 3x3. Depois imprima na tela a soma de todos os  números.

**Exemplo de:**
- Entrada:
    ```yaml
    Digite o valor da posição [0][0]: 1  
    Digite o valor da posição [0][1]: 2  
    Digite o valor da posição [0][2]: 3  
    Digite o valor da posição [1][0]: 4  
    Digite o valor da posição [1][1]: 5  
    Digite o valor da posição [1][2]: 6  
    Digite o valor da posição [2][0]: 7  
    Digite o valor da posição [2][1]: 8  
    Digite o valor da posição [2][2]: 9
    ```
 
* Saída:
    ```css
    A soma de todos os valores da matriz é: 45
    ```

---

### 🔹 Exercício 2 - Maior e Menor
**Descrição:** Crie um programa em C que  leia 9 números inteiros e armazene eles em uma matriz 3x3. Depois informe qual é o menor e o maior número.

**Exemplo de:**
- Entrada:
    ```yaml
    Digite o valor da posição [0][0]: 4
    Digite o valor da posição [0][1]: 7  
    Digite o valor da posição [0][2]: 1  
    Digite o valor da posição [1][0]: 9  
    Digite o valor da posição [1][1]: 2  
    Digite o valor da posição [1][2]: 6  
    Digite o valor da posição [2][0]: 3  
    Digite o valor da posição [2][1]: 8  
    Digite o valor da posição [2][2]: 5
    ```
 
* Saída:
    ```css
    O menor valor da matriz é: 1  
    O maior valor da matriz é: 9
    ```

---

### 🔹 Exercício 3 - Soma: Linha e Coluna
**Descrição:** Crie um programa em C que leia 9 números inteiros e armazene eles em uma matriz 3x3. Depois calcule e imprima a soma de cada linha e coluna da matriz.


**Exemplo de:**
- Entrada:
    ```yaml
    Digite o valor da posição [0][0]: 1  
    Digite o valor da posição [0][1]: 2  
    Digite o valor da posição [0][2]: 3  
    Digite o valor da posição [1][0]: 4  
    Digite o valor da posição [1][1]: 5  
    Digite o valor da posição [1][2]: 6  
    Digite o valor da posição [2][0]: 7  
    Digite o valor da posição [2][1]: 8  
    Digite o valor da posição [2][2]: 9

    ```
 
* Saída:
    ```css
    Soma da linha 0: 6  
    Soma da linha 1: 15  
    Soma da linha 2: 24  

    Soma da coluna 0: 12  
    Soma da coluna 1: 15  
    Soma da coluna 2: 18
    ```

---

### 🔹 Exercício 4 - Posição de um Elemento
**Descrição:**  Crie um programa em C que leia um número inteiro N, 9 números inteiros e armazene os nove em uma matriz 3x3. Depois exiba a posição (linha, coluna) de todas as ocorrências de N na matriz. Se o elemento não estiver na matriz imprima `"O número N não foi encontrado"`.

**Exemplo de:**
- Entrada:
    ```yaml
    Digite o número a ser procurado: 5

    Digite o valor da posição [0][0]: 1  
    Digite o valor da posição [0][1]: 2  
    Digite o valor da posição [0][2]: 3  
    Digite o valor da posição [1][0]: 4  
    Digite o valor da posição [1][1]: 5  
    Digite o valor da posição [1][2]: 6  
    Digite o valor da posição [2][0]: 7  
    Digite o valor da posição [2][1]: 8  
    Digite o valor da posição [2][2]: 9
    ```
 
* Saída:
    ```css
    O número 5 foi encontrado nas posições:
    Linha 1, Coluna 1
    ```
Outro exemplo:

- Entrada:
    ```yaml
    Digite o número a ser procurado: 10

    Digite o valor da posição [0][0]: 1  
    Digite o valor da posição [0][1]: 2  
    Digite o valor da posição [0][2]: 3  
    Digite o valor da posição [1][0]: 4  
    Digite o valor da posição [1][1]: 5  
    Digite o valor da posição [1][2]: 6  
    Digite o valor da posição [2][0]: 7  
    Digite o valor da posição [2][1]: 8  
    Digite o valor da posição [2][2]: 9
    ```
 
* Saída:
    ```css
    O número 10 não foi encontrado
    ```
    
---
