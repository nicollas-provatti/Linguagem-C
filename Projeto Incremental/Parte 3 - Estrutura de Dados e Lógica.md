# 🧠 Projeto Sistema Bancário — Etapa 3: Estrutura de Dados e Lógica em C

---

## 🎯 Objetivo:
Implementar um sistema bancário básico em C, utilizando:

- `struct` para representar contas bancárias,
- `array de structs` para armazenar várias contas,
- lógica real de operações (criar conta, depositar, sacar etc).

---

## 📝 Passo a Passo:

### 1️⃣ Definir a estrutura Conta
No início do programa, defina uma `struct` chamada `Conta`, que representará cada conta bancária:

```c
typedef struct {
    int numero;       // gerado automaticamente
    char nome[100];   // nome do titular
    float saldo;      // começa com 0
} Conta;
```

<br>

### 2️⃣ Declarar o array de contas
Declare um **array de structs** com tamanho fixo (ex: 100 contas). Crie também uma variável para acompanhar o número de contas criadas:

```c
#define MAX_CONTAS 100
Conta contas[MAX_CONTAS];
int totalContas = 0;
```

<br>

### 3️⃣ Criar a função `criarConta`
A função deve:

- Ler o **nome** do titular,
- Gerar automaticamente um **número de conta** sequencial (1001, 1002, etc),
- Definir o saldo inicial como **zero**,
- Armazenar os dados na próxima posição do array,
- Incrementar `totalContas`.
- Checar se o número de contas cadastradas ultrapassou o limite. Se sim exiba a mensagem `"Limite de contas atingido"`.

<br>

### 4️⃣ Criar a função `exibirContas()`
Essa função deve:
- **Percorrer** o array de contas e mostrar número, nome e saldo.

<br>

### 5️⃣ Criar a função `depositar()`
Essa função deve:

- Solicitar o **número da conta**,
- Solicitar o **valor a depositar**,
- Verificar se a conta existe,
- Somar o valor ao saldo da conta.

<br>

### 6️⃣ Criar a função `sacar()`
Essa função deve:

- Solicitar o número da conta e o valor,
- Verificar se a conta existe e se há **saldo suficiente**,
- Subtrair o valor do saldo, se possível.


<br>

### 7️⃣ Criar a função `buscarConta()`
Essa função deve:

- Solicitar o número da conta,
- Mostrar os dados da conta (número, nome, saldo),
- Caso não exista, mostrar mensagem de erro.


---

## ✅ Resultado Esperado:
Ao final da Etapa 3, o aluno terá implementado:

- Armazenamento de dados usando struct e array,
- Um menu funcional com chamadas para as funções bancárias,
- Uma lógica segura e modular de criação, movimentação e busca de contas,
- Um número de conta gerado automaticamente e único.

---