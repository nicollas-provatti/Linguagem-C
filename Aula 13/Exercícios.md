## 📝 Exercícios 

---

### 🔹 Exercício 1 -  Contador de Caracteres
**Descrição:** Escreva um programa que leia um arquivo de texto chamado `"entrada.txt"` e conte quantos caracteres (excluindo `EOF`) ele contém. Use `fgetc()` para ler os caracteres um a um. Exiba o total ao final.

---

### 🔹 Exercício 2 - Leitura de Linhas
**Descrição:** Crie um programa que abra o arquivo `"notas.txt"` e exiba seu conteúdo linha por linha usando `fgets()`. Cada linha do arquivo contém o nome de um aluno seguido de uma nota, como no exemplo:

```
João 8.5  
Maria 9.2  
Carlos 7.0  
```

O programa deve mostrar o conteúdo formatado no terminal.

---

### 🔹 Exercício 3 - Registro de Usuários
**Descrição:** Crie um programa que permita o cadastro de usuários. Para cada usuário, leia do teclado: nome, idade e email. Grave essas informações no arquivo `"usuarios.txt"` usando `fprintf()`. Depois, abra o arquivo e leia os dados usando `fscanf()`, exibindo as informações formatadas.

---

### 🔹 Exercício 4 - Copiar Arquivo
**Descrição:** Escreva um programa que copie o conteúdo de um arquivo chamado `"origem.txt"` para outro chamado `"destino.txt"`.

---

### 🔹 Exercício 5 - Adicionar Comentários
**Descrição:** Crie um programa em C que permita ao usuário inserir comentários em um arquivo chamado "comentarios.txt". Para cada comentário, o programa deve solicitar: nome do auto e comentário. O comentário deve ser salvo no seguinte formato no final do arquivo:

```
Autor: [nome]
Comentário: [comentário]
--------------------------
```

O usuário pode adicionar **vários comentários**. O processo deve continuar até o usuário digitar `"FIM"` no campo do comentário. Dica: abra o arquivo no modo de anexação (`"a"`) para não apagar os comentários anteriores.

---