# 🏦 Projeto do Curso: Sistema Bancário em C

Este projeto será desenvolvido de forma incremental ao longo do curso de Lógica de Programação. Seu objetivo é permitir que os alunos apliquem os conceitos aprendidos em sala na construção de um sistema real e funcional. O projeto será dividido em **5 etapas**, cada uma correspondente a um conjunto de conteúdos aprendidos.

---

## 📌 Descrição
O sistema permitirá que um banco gerencie contas de clientes, possibilitando operações básicas como cadastro, depósitos, saques e transferências.

---

## 🛠️ Funcionalidades

- **Criar uma conta:** O usuário pode cadastrar um novo cliente informando **nome e número da conta**. O saldo inicial será **zero**.

* **Exibir todas as contas cadastradas:** O sistema lista **todas as contas** mostrando nome, número da conta e saldo atual.

- **Depositar dinheiro:** O usuário informa um **número de conta** e um **valor** a ser depositado. O saldo da conta aumenta conforme o valor depositado.

* **Sacar dinheiro:** O usuário informa um **número de conta** e um **valor** a ser sacado. O saque só ocorre se houver **saldo suficiente** na conta.

- **Buscar conta por número:** O usuário pode digitar um **número de conta** e visualizar os detalhes do cliente e saldo atual.

---

## 📈 Etapas

### 🔹 Etapa 1 – Interação com o Usuário (Menus, Decisão e Repetição)
**Objetivo:** Introduzir a lógica de controle de fluxo utilizando estruturas condicionais e de repetição. O que será feito:

- Criar um menu interativo com opções numéricas para o usuário.
* Utilizar `if`, `else`, `switch` e laços (`while`, `do-while` ou `for`) para repetir o menu até o usuário desejar sair.
- Nenhuma funcionalidade do sistema será implementada ainda — apenas a interface inicial de seleção.

### 🔹 Etapa 2 – Modularização (Funções)
**Objetivo:** Introduzir o conceito de funções para organizar melhor o código. O que será feito:

- Criar funções separadas para cada opção do menu (ex: `criarConta()`, `exibirContas()`, etc.), mesmo que ainda não tenham lógica implementada.

* Chamar as funções correspondentes a partir do menu, organizando o código de forma limpa e reutilizável.

- Apresentar parâmetros e retorno simples, preparando o terreno para funções mais complexas.

### 🔹 Etapa 3 – Estrutura de Dados
**Objetivo:** Usar um array de structs para armazenar os dados dos usuários, tornando o código mais organizado e representativo. O que será feito:

- Criar uma `struct` Conta com campos como numero, nome, saldo.

* Refatorar todas as funções para usar Conta `contas[MAX]` em vez de arrays paralelos.

- Tornar o código mais limpo e mais próximo da modelagem de objetos reais.

* Incluir funcionalidades como buscar uma conta por número.

### 🔹 Etapa 4 – Alocação Dinâmica
**Objetivo:** Romper o limite fixo de contas, permitindo que o sistema escale dinamicamente. O que será feito:

- Usar `malloc`, `realloc` e `free` para alocar e realocar memória conforme novas contas forem criadas.

* Atualizar todas as funções para usar ponteiros (Conta *contas) em vez de arrays fixos.

- Trabalhar com o conceito de ponteiros e acesso via notação -> ou (*ptr).campo.

* Gerenciar o crescimento do vetor de contas conforme a demanda.

### 🔹 Etapa 5 – Persistência com Arquivos (Banco de Dados Simples)
**Objetivo:** Permitir que os dados das contas sejam salvos e carregados entre execuções. O que será feito:

- Criar funções para salvar as contas em um arquivo (`fwrite`, `fprintf`, `fputs`) e para carregar os dados no início do programa.

* Escolher um formato simples (binário ou texto estruturado).

- Garantir que os dados sejam atualizados corretamente ao final de cada operação.

* Mostrar a importância de persistência em sistemas reais.

---