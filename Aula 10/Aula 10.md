# 📘 Aula 10 – Struct

### 🔍 O que é struct ? 
Em C, uma struct (ou estrutura) é um tipo de dado composto que permite agrupar diferentes tipos de dados sob um único nome. Elas são muito úteis para organizar dados relacionados de maneira mais eficiente. Por exemplo, se quisermos armazenar as informações de um aluno, como nome, idade e nota, podemos usar uma struct:

---

### 🔵 Operações com structs

**Declaração:**
A declaração de uma `struct` define o formato da estrutura, ou seja, os tipos e a quantidade de dados que ela conterá.

**Exemplo:**
```c
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};
```
Geralmente uma `struct` é declarada globalmente.

**Inicialização:**
A inicialização de uma `struct` envolve criar uma variável do tipo da `struct` e atribuir valores aos seus membros.

**Exemplo:**
```c
struct Aluno aluno1;
aluno1.idade = 20;
aluno1.nota = 8.5;
strcpy(aluno1.nome, "João");
```

Ou podemos inicializar diretamente:

```c
struct Aluno aluno1 = {"João", 20, 8.5};
```

**Exemplo completo:**
```c
#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main(){
    struct Aluno aluno1;

    aluno1.idade = 20;
    aluno1.nota = 8.5;
    strcpy(aluno1.nome, "João");

    return 0;
}
```

---

### 🔵 Acesso aos Membros de uma Struct
Após declarar e inicializar uma struct, o próximo passo é acessar e manipular seus membros. Em C, os membros de uma struct são acessados usando o operador de **ponto (.)** para variáveis do tipo struct e o operador de **seta (->)** para ponteiros para structs. Entender como acessar e modificar os membros é fundamental para utilizar structs de maneira eficaz.

Para acessar um membro de uma struct, você utiliza o operador de **ponto (.)**. O operador de ponto é usado quando você tem uma variável struct e deseja acessar um de seus membros diretamente.

**Exemplo:**
```c
#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main(){
    struct Aluno aluno1 = {"João", 20, 8.5};

    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Nota: %.2f\n", aluno1.nota);

    return 0;
}
```
Nesse exemplo:
- `aluno1.nome` acessa o membro `nome`.
- `aluno1.idade` acessa o membro `idade`.
- `aluno1.nota` acessa o membro `nota`.

Para modificar os valores de um membro de uma struct, você usa o operador de **ponto (.)** e atribui um novo valor ao membro.

**Exemplo:**
```c
#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main(){
    struct Aluno aluno1 = {"João", 20, 8.5};

    aluno1.idade = 21;
    aluno1.nota = 8.0;

    return 0;
}
```

Nesse exemplo:
- `aluno1.idade` e  `aluno1.nota` são atualizados com os novos valores.

--- 

### 🔵 Arrays de Structs
Arrays de structs são uma maneira eficiente de armazenar e manipular múltiplas instâncias de uma estrutura de dados em C. Essa abordagem é útil quando você precisa lidar com um conjunto de dados semelhantes, como uma lista de alunos em uma turma, onde cada aluno possui um conjunto de informações comuns, mas com valores diferentes.

#### 🔹 **Declaração e inicialização:**
Um array de structs é declarado de maneira similar a um array de qualquer outro tipo de dado. Você especifica o tipo `struct` seguido pelo nome do array e o tamanho desejado.

**Exemplo:**
```c
#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno turma[3] = {
        {"João", 20, 8.5},
        {"Maria", 22, 9.0},
        {"Pedro", 21, 7.5}
    };

    return 0;
}
```

Nesse exemplo, `turma` é um array de 3 elementos do tipo `struct Aluno`. Cada elemento do array é uma `struct` que é inicializada com informações específicas sobre um aluno.

#### 🔹 **Acessando e Modificando Elementos em um Array de Structs:**
Para acessar ou modificar os membros de um array de structs, você usa o operador de **ponto (.)** junto com o **índice do array**. A ideia é similar ao acesso a elementos de um array normal.

**Exemplo:**
```c
#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno turma[3] = {
        {"João", 20, 8.5},
        {"Maria", 22, 9.0},
        {"Pedro", 21, 7.5}
    };

    turma[1].nota = 8.0;

    return 0;
}
```
Nesse exemplo, o valor da nota do segundo aluno (Maria) é modificado.

#### 🔹 **Iterando sobre um Array de Structs:**
Quando você precisa realizar operações em todos os elementos de um array de structs, um loop é frequentemente utilizado para iterar através do array e acessar cada struct.

**Exemplo:**
```c
#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno turma[3] = {
        {"João", 20, 8.5},
        {"Maria", 22, 9.0},
        {"Pedro", 21, 7.5}
    };

    float somaNotas = 0.0, mediaNotas;

    for (int i = 0; i < 3; i++) {
        somaNotas += turma[i].nota;
    }

    mediaNotas = somaNotas / 3.0;

    printf("Média: %.2f\n", mediaNotas);

    return 0;
}
```
Nesse exemplo, um loop é usado para somar todas as notas e calcular a média.

---

### 🔵 Passagem de Structs para Funções
Passar structs para funções é uma prática comum em C que permite que funções manipulem dados complexos e realizem operações sobre eles. 

#### 🔹 **Passagem de structs por valor:**
Quando você passa uma struct por valor para uma função, uma **cópia completa** da struct é feita e passada para a função. Isso significa que a função opera sobre a cópia da struct, e qualquer modificação feita na função não afeta a struct original.

**Exemplo:**
```c
#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

void atualizarNota(struct Aluno aluno, float novaNota) {
    aluno.nota = novaNota;
    printf("Nota: %.2f\n", aluno.nota);  // Saída: 9.00
    
}

int main() {
    struct Aluno aluno1 = {"João", 20, 8.5};

    atualizarNota(aluno1, 9.0);

    printf("Nota: %.2f\n", aluno1.nota);  // Saída: 8.50

    return 0;
}
```
Nesse exemplo, a função `atualizarNota()` recebe a `struct Aluno` por valor. A nota é atualizada na cópia da struct, e a struct original em `main()` permanece inalterada.

⚠️ **Importante:** Arrays de structs são passados por referência. 

---

### 🔵 Structs Aninhadas
Structs aninhadas permitem que você defina uma struct dentro de outra struct. Essa abordagem é útil para representar dados que possuem uma estrutura hierárquica ou complexa, e permite organizar melhor informações relacionadas.

**Exemplo:**
```c
struct Data {
    int dia;
    int mes;
    int ano;
};

struct Aluno {
    char nome[50];
    int idade;
    float nota;
    struct Data dataNascimento; // Struct aninhada
};
```

Aqui, a `struct Aluno` possui uma `struct Data` como um de seus membros. Para acessar a data de nascimento de um aluno:

**Exemplo:**
```c
struct Aluno aluno1 = {"João", 20, {15, 5, 2001}};
printf("Data de nascimento: %d/%d/%d\n", aluno1.dataNascimento.dia, aluno1.dataNascimento.mes, aluno1.dataNascimento.ano);
```

Para acessar membros da struct aninhada, você utiliza o operador ponto (.) **duas vezes:** uma para acessar o membro da struct externa e outra para acessar o membro da struct interna.

---

### 🔵 `typedef` com Structs
O `typedef` em C é usado para criar um **alias** (apelido) para tipos de dados, facilitando a leitura e escrita do código. Podemos usar `typedef` para dar um nome mais simples às structs.

**Exemplo:**

```c
#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

int main() {
    Aluno aluno1 = {"João", 20, 8.5};
}
```

Agora podemos usar `Aluno` em vez de `struct Aluno` para declarar variáveis desse tipo.

