# 📘 Aula 13 - Manipulação de Arquivos

### 🔵 Introdução à Manipulação de Arquivos
Em programas mais complexos, muitas vezes é necessário armazenar dados de forma permanente, mesmo após o encerramento do programa. Para isso, utilizamos **arquivos**, que permitem **salvar, ler e manipular informações no disco** rígido. Ao contrário de variáveis em memória, os dados armazenados em arquivos persistem entre execuções do programa.

A linguagem C oferece uma poderosa biblioteca de funções para lidar com arquivos, disponível através da **biblioteca padrão** `<stdio.h>`. Essa biblioteca fornece funções como `fopen()`, `fclose()`, `fscanf()`, `fprintf()`, `fread()`, `fwrite()`, entre outras.

A manipulação de arquivos em C segue um fluxo comum:

1. **Abrir o arquivo** (modo leitura, escrita, etc.)

2. **Realizar operações** (ler, escrever, modificar)

3. **Fechar o arquivo**

Neste capítulo, vamos explorar esse processo e entender como realizar operações básicas com arquivos texto, além de boas práticas no uso de arquivos em C.

---

### 🔵 Abertura e Fechamento de Arquivos
Para manipular arquivos em C, usamos principalmente duas funções da biblioteca `<stdio.h>`:

- `fopen()` – para abrir (ou criar) um arquivo;

- `fclose()` – para fechar um arquivo após o uso.

#### 🔹 `fopen()`
A função `fopen()` é usada para abrir um arquivo e associá-lo a um ponteiro do tipo `FILE`. Sua sintaxe básica é:

```c
FILE *arquivo;
arquivo = fopen("nome_do_arquivo.txt", "modo");
```

- `"nome_do_arquivo.txt"` é o nome (e caminho) do arquivo.

- `"modo"` indica como o arquivo será aberto. Alguns modos comuns:

|Modo	|Descrição|
|-------|---------|
|`"r"`	|Leitura. O arquivo deve existir.|
|`"w"`	|Escrita. Cria um novo arquivo ou sobrescreve o existente.|
|`"a"`	|Acrescentar. Abre/cria o arquivo e adiciona no final.|
|`"r+"`	|Leitura e escrita. O arquivo deve existir.|
|`"w+"`	|Leitura e escrita. Cria novo arquivo ou sobrescreve.|
|`"a+"`	|Leitura e escrita. Abre/cria e escreve no final.|

Sempre verifique se `fopen()` **funcionou corretamente**, pois ele retorna NULL em caso de erro:

```c
if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo!\n");
    return 1;
}
```

#### 🔹 `fclose()`
Depois de terminar as operações com o arquivo, é importante **fechá-lo** com `fclose()`. Isso libera os recursos associados e garante que os dados sejam gravados corretamente:

```c
fclose(arquivo);
```

---

### Leitura de Arquivos
Para ler arquivos, a linguagem C oferece diversas funções, cada uma mais adequada para um tipo de leitura: caractere por caractere, linha por linha ou estruturada. Abaixo, vamos explorar as principais:

#### 🔹 `fgetc()`
Lê **um único caractere** do arquivo por vez.

```c
FILE *arquivo = fopen("exemplo.txt", "r");
char c;

if (arquivo != NULL) {
    while ((c = fgetc(arquivo)) != EOF) {
        printf("%c", c);
    }
    fclose(arquivo);
}
```

- Retorna o próximo caractere do arquivo ou `EOF` (end of file) se acabar o conteúdo.

- Ideal para processar arquivos caracter por caracter, como ao contar letras ou procurar por um símbolo.

#### 🔹 `fgets()`
Lê uma **linha inteira** do arquivo (até encontrar um \n ou atingir o tamanho máximo informado).

```c
char linha[100];
FILE *arquivo = fopen("exemplo.txt", "r");

if (arquivo != NULL) {
    while (fgets(linha, 100, arquivo) != NULL) {
        printf("%s", linha);
    }
    fclose(arquivo);
}
```

- `fgets(destino, tamanho, arquivo)` lê até `tamanho - 1` caracteres e sempre adiciona `\0` no final.

- Muito usada para ler textos ou frases completas com segurança (evita estouro de buffer).

#### 🔹 `fscanf()`
A função `fscanf()` funciona de forma semelhante ao `scanf()`, mas para **ler dados formatados diretamente de um arquivo**.

```c
FILE *arquivo = fopen("dados.txt", "r");
char nome[50];
int idade;

if (arquivo != NULL) {
    fscanf(arquivo, "%s %d", nome, &idade);
    printf("Nome: %s, Idade: %d\n", nome, idade);
    fclose(arquivo);
}
```

- Permite extrair dados de forma estruturada (como nome e idade) quando se conhece o formato do conteúdo.

- Pode ser combinada com `fprintf()` para criar e ler arquivos com dados organizados.

---

### 🔵 Escrita de Arquivos
Assim como a leitura, a escrita pode ser feita de diferentes formas.

#### 🔹 `fputc()`
Escreve **um único caractere** em um arquivo.

```c
FILE *arquivo = fopen("saida.txt", "w");

if (arquivo != NULL) {
    fputc('A', arquivo);
    fputc('\n', arquivo);
    fclose(arquivo);
}
```

- Usado quando você quer escrever caractere por caractere.

- Retorna o caractere escrito (como `int`) ou `EOF` em caso de erro.

#### 🔹 `fputs()`
Escreve uma **string inteira** (sem o `\0`) no arquivo.

```c
FILE *arquivo = fopen("saida.txt", "w");

if (arquivo != NULL) {
    fputs("Olá, mundo!\n", arquivo);
    fclose(arquivo);
}
```

- Similar ao `puts()`, mas escreve no arquivo ao invés do terminal.

- Não adiciona automaticamente o `\n` — é necessário incluí-lo manualmente se desejar


#### 🔹 `fprintf()`
Escreve **dados formatados** no arquivo.

```c
FILE *arquivo = fopen("saida.txt", "w");

if (arquivo != NULL) {
    fprintf(arquivo, "Nome: %s\nIdade: %d\n", "João", 25);
    fclose(arquivo);
}
```

- `fprintf()`funciona como `printf()`, mas escreve no arquivo em vez da tela.

- Muito útil para salvar relatórios, dados de usuários, logs, etc.
---
