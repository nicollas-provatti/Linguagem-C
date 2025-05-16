# 🏦 Projeto Sistema Bancário — Etapa 1: Menu de Interação

---

## 🎯 Objetivo:
Criar um **menu interativo** que será a base do sistema bancário. O menu deve permitir que o usuário escolha entre várias opções e receba uma resposta para cada uma. Nesta etapa, o sistema **ainda não executa operações bancárias reais**, apenas exibe mensagens.

---

## 📝 Passo a Passo:

#### 1️⃣ Criar o esqueleto do programa
Abra o VSCode e comece criando a estrutura básica de um programa:

```c
#include <stdio.h>

int main() {
    // Código aqui
    return 0;
}
```

<br>

#### 2️⃣ Declarar a variável de controle do menu
Dentro da função `main`, crie uma variável inteira chamada `opcao`, que será usada para guardar a opção escolhida pelo usuário.

<br>

#### 3️⃣ Criar a estrutura de repetição
Utilize a estrutura `while` ou `do/while` para que o menu seja exibido repetidamente até que o usuário escolha sair (`opcao == 0`):

<br>

#### 4️⃣ Exibir o menu de opções
Dentro da estrutura de repetição escolhida, escreva o menu com as opções disponíveis:

```
===== SISTEMA BANCÁRIO =====
0 - Sair
1 - Criar Conta
2 - Exibir Contas
3 - Depositar
4 - Sacar
5 - Buscar Conta
===========================

Escolha uma opção: 
```

<br>

#### 5️⃣ Usar a estrutura de decisão `switch`
Após ler a opção do usuário, use o comando `switch` para verificar o valor digitado e exibir uma mensagem correspondente. As mensagem são:

```
Opção 0: Saindo do sistema...
Opção 1: Opção Criar Conta selecionada.
Opção 2: Opção Exibir Contas selecionada.
Opção 3: Opção Depositar selecionada.
Opção 4: Opção Sacar selecionada.
Opção 5: Opção Buscar Conta selecionada.
Outros opções: Opção inválida. Tente novamente.
```

<br>

#### 6️⃣ Testar o programa
Execute seu programa e teste digitando as opções do menu (1 a 5 e 0) e também um número inválido (como 9 ou -1) para garantir que a mensagem "Opção inválida" apareça.

---

### ✅ Resultado Esperado:
O programa exibe um menu e responde à escolha do usuário com mensagens, repetindo até que a opção **0 - Sair** seja escolhida.

---
