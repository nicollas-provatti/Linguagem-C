## 📝 Exercícios 

---

### 🔹 Exercício 1 - Tamanho da Palavra
**Descrição:** Crie um programa em C que leia uma palavra digitada pelo usuário e utilize a função `strlen()` para determinar o número de caracteres dessa palavra. Após calcular o comprimento, exiba a quantidade total de caracteres digitados e uma mensagem personalizada de acordo com o tamanho da palavra:

- Se a palavra tiver mais de 15 caracteres, exiba: `"Palavra longa"`.
- Se tiver mais de 8 e até 15 caracteres, exiba: `"Palavra média"`.
- Se tiver mais de 5 e até 8 caracteres, exiba: `"Palavra pequena"`.
- Caso contrário, não exiba nenhuma mensagem adicional.

Considere apenas palavras (sem espaços).

**Exemplo de:**
- Entrada:
    ```yaml
    Digite uma palavra: equidade
    ```
 
* Saída:
    ```css
    Palavra pequena
    ```

---

### 🔹 Exercício 2 - Comparando Nomes
**Descrição:** Faça um programa que leia duas palavras, e utilize `strcmp()` para comparar se as palavras são iguais. Mostre mensagens como: `"As palavras são iguais."` ou `"As palavras são diferentes."`. A função `strcmp()` retorna 0 caso as strings foram iguais.

**Exemplo de:**
- Entrada:
    ```yaml
    Digite a primeira palavra: igualdade
    Digite a segunda palavra: igualdade
    ```
 
* Saída:
    ```css
    As palavras são iguais.
    ```

---

### 🔹 Exercício 3 - Concatenando Frases
**Descrição:** Escreva um programa que leia duas frases curtas (máximo 40 caracteres cada) e as concatene em uma única string utilizando `strcat()`. Por fim, exiba o resultado da concatenação.


**Exemplo de:**
- Entrada:
    ```yaml
    Digite a primeira frase: A linguagem C é legal.
    Digite a segunda frase: Ela é bem divertida.
    ```
 
* Saída:
    ```css
    Frase resultante: A linguagem C é legal. Ela é bem divertida.
    ```

---

### 🔹 Exercício 4 - Ordem de Palavras
**Descrição:** Crie um programa que leia três palavras separadas e armazene cada uma em uma string diferente. Depois, exiba as palavras na ordem inversa da leitura, uma por linha.

**Exemplo de:**
- Entrada:
    ```yaml
    Palavra 1: casa
    Palavra 2: bonita
    Palavra 3: azul

    ```
 
* Saída:
    ```css
    azul
    bonita
    casa
    ```

---

### 🔹 Exercício 5 - Verificando Palíndromos
**Descrição:** Crie uma função chamada `ehPalindromo()` que receba uma string e retorne 1 se for um palíndromo, ou 0 caso contrário. No `main()`, leia uma palavra do usuário e chame essa função para verificar. Exiba: `É palíndromo!` ou `Não é palíndromo.`
Dica: Um palíndromo é uma palavra que se lê igual de frente para trás e de trás para frente, como "arara" ou "ovo".

**Exemplo de:**
- Entrada:
    ```yaml
    Digite uma palavra: anilina
    ```
 
* Saída:
    ```yaml
    É palíndromo!
    ```
    
---