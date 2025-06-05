## 📝 Exercícios 

---

### 🔹 Exercício 1 - Cadastro Simples
**Descrição:** Crie uma struct chamada `Pessoa` com os seguintes campos:

- `nome` (string de até 50 caracteres)
- `idade` (int)

No `main()`, leia os dados de **uma pessoa** e imprima uma mensagem formatada.

**Exemplo de:**
- Entrada:
    ```yaml
    ------- CADASTRO -------
    Digite seu nome: Marcos
    Digite sua idade: 22
    ```
 
* Saída:
    ```css
    ---- DADOS ----
    Nome: Marcos
    Idade: 22 anos
    ```

---

### 🔹 Exercício 2 - Lista de Alunos 
**Descrição:** Crie uma struct chamada `Aluno` com os campos:

- `nome` (string)
- `nota` (float)

Peça ao usuário quantos alunos deseja cadastrar (máximo 100). Em seguida: leia os dados de cada aluno, Imprima a lista de alunos com suas respectivas notas e calcule e mostre a média geral das notas.

**Exemplo de:**
- Entrada:
    ```yaml
    Quantas alunos você quer cadastrar ? 3

    1° Aluno
    Nome: Ana
    Nota: 7.8

    2° Aluno
    Nome: Márcio
    Nota: 8.7

    3° Aluno
    Nome: Cristina
    Nota: 6.7
    ```
 
* Saída:
    ```css
    Dados do 1° Aluno:
    Nome: Ana
    Nota: 7.8

    Dados do 2° Aluno:
    Nome: Márcio
    Nota: 8.7

    Dados do 3° Aluno:
    Nome: Cristina
    Nota: 6.7

    A média geral é 7.73
    ```

---

### 🔹 Exercício 3 - Mostrar Pessoa
**Descrição:** Usando a struct `Pessoa` (nome, idade), escreva uma função chamada `exibirPessoa()` que receba uma struct como parâmetro e imprima os dados da pessoa. No `main()`, leia os dados de uma pessoa e chame a função para exibir.


**Exemplo de:**
- Entrada:
    ```yaml
    Qual o seu nome ? Aurora
    Qual a sua idade ? 17
    ```
 
* Saída:
    ```css
    Bem-vindo(a), Aroura!
    Seu Dados:
    Nome: Aurora
    Idade: 17
    ```
---

### 🔹 Exercício 4 - Buscar Produto
**Descrição:** Crie uma struct chamada `Produto` com:

- `nome` (string)
- `preco` (float)

Crie uma função chamada `buscarProduto()` que recebe um array de produtos, a quantidade de produtos e o nome de um produto, e retorna o índice onde ele foi encontrado ou -1 se não existir. No `main()`: cadastre 3 produtos, peça ao usuário o nome de um produto para busca e mostre o preço do produto encontrado ou uma mensagem de `"Produto não encontrado"`.

**Exemplo de:**
- Entrada:
    ```yaml
    --- CADASTRO ---
    Produto 1
    Nome: Bolsa
    Preço: 78.00

    Produto 2
    Nome: Tênis
    Preço: 112.00

    Produto 3
    Nome: Calça
    Preço: 85.00

    Você desejar procurar qual produto ? Calça

    ```
 
* Saída:
    ```css
    A calça custa R$ 85.00.
    ```
---

### 🔹 Exercício 5 -  Endereço de Funcionário
**Descrição:** Crie as structs:

- `Endereco`, com os campos: `rua`, `numero`, `cidade`
- `Funcionario`, com os campos: `nome`, `cargo` e um campo do tipo `Endereco`

No `main()`: cadastre os dados de 2 funcionários e exiba os dados completos, inclusive o endereço, em formato estruturado.
 
**Exemplo de:**
- Entrada:
    ```yaml
    --- CADASTRO ---
    1° Funcionário
    Nome: Ana Lima
    Cargo: Analista
    Rua: Rua das Flores
    Numero: 123
    cidade: Salvador

    2° Funcionário
    Nome: Jorge Dantas
    Cargo: Contador
    Rua: Rua das Árvores
    Numero: 73
    cidade: Maceió
    ```
 
* Saída:
    ```yaml
    ------------ DADOS FUNCIONÁRIOS ------------
    Funcionário: Ana Lima
    Cargo: Analista
    Endereço: Rua das Flores, 123 - Salvador

    Funcionário: Jorge Dantas
    Cargo: Contador
    Endereço: Rua das Árvores, 73 - Maceió
    ```
    
---