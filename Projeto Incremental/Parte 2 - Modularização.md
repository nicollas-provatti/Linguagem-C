# 🏦 Projeto Sistema Bancário — Etapa 2: Modularização

---

## 🎯 Objetivo:
Reorganizar o código do menu usando **funções** (modularização). Cada opção do menu agora será tratada por uma **função separada** e o menu também será exibido por uma função específica.

---

## 📝 Passo a Passo:

#### 1️⃣ Criar a função do menu: `mostrarMenu`
Ao invés de mostrar o menu dentro do `main`, crie uma **função inteira** chamada `mostrarMenu()` que:

- Exibe as opções.
- Lê a escolha do usuário.
- Retorna o valor da opção escolhida.

<br>

#### 2️⃣ Substituir o código do menu principal
Na função `main()`, substitua a exibição direta do menu por uma chamada à nova função `mostrarMenu()`:

```c
opcao = mostrarMenu();
```

<br>

#### 3️⃣ Criar uma função para cada operação
Crie uma **função vazia** (funcao vazio) para cada opção do menu, que por enquanto só exibe uma mensagem simples:

```c
void criarConta() {
    printf("Opção Criar Conta selecionada.");
}
```

Repita isso para:

- `exibirContas()`
- `depositar()`
- `sacar()`
- `buscarConta()`


<br>

#### 4️⃣ Chamar as funções no lugar dos blocos de código
Dentro da estrutura `switch`, chame a função correspondente a cada opção:

```c
switch (opcao) {
    case 1:
        criarConta();
        break;
    case 2:
        exibirContas();
        break;
    // ...
}
```
<br>

#### 5️⃣ Utilizar recursos de usabilidade
Use as funções da linguagem C para melhorar a experiência do usuário:

- Aguardar alguns segundos entre as interações com `Sleep(3000);` (espera 3 segundos)
- Limpar a tela com `system("cls");` após cada operação

Não se esqueça de incluir no início do programa:

```c
#include <windows.h>  // Para usar Sleep
#include <stdlib.h>   // Para usar system("cls")
```

Obs.: Esses comandos funcionam no **Windows**. Se seus programas forem executados em Linux ou outro sistema, avise o professor para adaptar os comandos corretamente.

---

### ✅ Resultado Esperado:
O programa funciona **igual à versão da Etapa 1**, porém agora está **organizado em funções**. Isso facilita muito a leitura, manutenção e expansão futura (como adicionar código real para as operações).

---