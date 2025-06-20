# Projetos

---

##  Projeto 1: Sistema de Gerenciamento de Biblioteca
**Objetivo:** Desenvolver um sistema para cadastrar, consultar e gerenciar livros de uma biblioteca.

**Estrutura da struct:**
```c
typedef struct {
    int codigo;
    char titulo[50];
    char autor[50];
    int ano;
    int disponivel; // 1 - Sim | 0 - Não
} Livro;
```

**Funcionalidades Obrigatórias:**

1. Cadastrar novo livro.
2. Exibir todos os livros.
3. Buscar livro por código.
4. Buscar livro por título.
5. Atualizar dados de um livro.
6. Excluir livro.
7. Exibir livros disponíveis.
8. Salvar e carregar dados dos livros em arquivo texto.

---

## Projeto 2: Sistema de Gerenciamento de Alunos 
**Objetivo:** Criar um sistema para armazenar dados de alunos, calcular médias e consultar informações acadêmicas.

**Estrutura da struct:**
```c
typedef struct {
    int matricula;
    char nome[50];
    float nota1, nota2;
    float media;
} Aluno;
```

**Funcionalidades Obrigatórias:**

1. Cadastrar novo aluno.
2. Exibir todos os alunos.
3. Buscar aluno por matrícula.
4. Atualizar dados do aluno.
5. Excluir aluno.
6. Calcular média das notas.
7. Exibir alunos aprovados e reprovados.
8. Salvar e carregar dados dos alunos de/para um arquivo texto.

--

## Projeto 3: Sistema de Controle de Vendas
**Objetivo:** Gerenciar vendas de produtos, controlando quantidade, preço e total de cada venda.

**Estrutura da struct:**
```c
typedef struct {
    int codigo;
    char produto[50];
    int quantidade;
    float precoUnitario;
    float total;
} Venda;
```

**Funcionalidades Obrigatórias:**

1. Registrar nova venda.
2. Exibir todas as vendas.
3. Buscar venda por código.
4. Atualizar dados de uma venda.
5. Excluir venda.
6. Calcular valor total de uma venda.
7. Calcular total geral de todas as vendas.
8. Salvar e carregar dados de/para um arquivo texto.

---


## Projeto 4: Sistema de Cadastro de Pacientes
**Objetivo:** Desenvolver um sistema para gerenciar dados de pacientes de uma clínica.

**Estrutura da struct:**
```c
typedef struct {
    int codigo;
    char nome[50];
    int idade;
    char diagnostico[100];
} Paciente;
```

**Funcionalidades Obrigatórias:**

1. Cadastrar novo paciente.
2. Exibir todos os pacientes.
3. Buscar paciente por código.
4. Atualizar dados do paciente.
5. Excluir paciente.
6. Listar pacientes por idade.
7. Listar pacientes por diagnóstico.
8. Salvar e carregar dados de/para um arquivo texto.

---


## Projeto 5: Sistema de Controle de Filmes 
**Objetivo:** Criar um sistema para armazenar informações sobre filmes.

**Estrutura da struct:**
```c
typedef struct {
    int codigo;
    char titulo[50];
    char genero[30];
    int anoLancamento;
} Filme;
```

**Funcionalidades Obrigatórias:**

1. Cadastrar novo filme.
2. Exibir todos os filmes.
3. Buscar filme por código.
4. Buscar filme por título.
5. Atualizar dados de um filme.
6. Excluir filme.
7. Listar filmes por gênero.
8. Salvar e carregar dados de/para um arquivo texto.

---

## ⚠️ Observação Importante para todos os projetos:
- A memória deve ser alocada dinamicamente.

- O carregamento inicial do arquivo para memória também deve ser dinâmico.

- Na função criarNovaEntidade, antes de adicionar um novo item, verificar se o limite de capacidade foi atingido.

- Em caso positivo, aumentar a capacidade com `realloc`.

- A liberação da memória alocada (`free`) deve ser realizada no final do programa.

---
