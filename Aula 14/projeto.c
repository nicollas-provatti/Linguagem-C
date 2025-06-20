#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

typedef struct {
    int numero;       
    char nome[100];  
    float saldo;      
} Conta;

// Funções do Banco de Dados
void carregarDados(Conta **contas, int *totalContas, int *idAtual);
void salvarDados(Conta *contas, int totalContas);

// Funções Utilitárias
int mostrarMenu();
int contaExiste(Conta *contas, int totalContas, int numero);
void carregando();

// Funções do Sistema
void criarConta(Conta **contas, int *totalContas, int *ids);
void exibirContas(Conta *contas, int totalContas);
void depositar(Conta *contas, int totalContas);
void sacar(Conta *contas, int totalContas);
void buscarConta(Conta *contas, int totalContas);
void transferir(Conta *contas, int totalContas);
void deletarConta(Conta **contas, int *totalContas);
void editarConta(Conta *contas, int totalContas);

int main() {
    setlocale(LC_ALL, "portuguese");

    Conta *contas = NULL;
    int ids, totalContas = 0;

    carregarDados(&contas, &totalContas, &ids);

    int opcao;

    do {
        opcao = mostrarMenu();
        getchar();

        system("cls");

        switch (opcao) {
        case 0:
            salvarDados(contas, totalContas);
            printf("Saindo do sistema.");
            carregando();
            break;
        case 1:
            criarConta(&contas, &totalContas, &ids);
            break;
        case 2:
            exibirContas(contas, totalContas);
            break;
        case 3:
            depositar(contas, totalContas);
            break;
        case 4:
            sacar(contas, totalContas);
            break;
        case 5:
            buscarConta(contas, totalContas);
            break;
        case 6:
            transferir(contas, totalContas);
            break;
        case 7:
            deletarConta(&contas, &totalContas);
            break;
        case 8:
            editarConta(contas, totalContas);
            break;
        default:
            printf("Opção inválida. Tente novamente.");
        }
        Sleep(3000);
        system("cls");

    } while (opcao != 0);

    return 0;
}

// Funções do Banco de Dados
void carregarDados(Conta **contas, int *totalContas, int *idAtual) {
    FILE *arquivo = fopen("contas.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao carregados os dados!\n");
        *idAtual = 1001;
        return;
    }
    Conta usuario;
    while (fscanf(arquivo, "%d,%99[^,],%f ", &usuario.numero, usuario.nome, &usuario.saldo) == 3) {
        Conta *temp = (Conta *) realloc(*contas, (*totalContas + 1) * sizeof(Conta));

        if (temp == NULL){
            printf("Erro ao realocar.\n");
            exit(1);
        }

        *contas = temp;

        (*contas)[*totalContas] = usuario;
        (*totalContas)++;
    }

    if (*totalContas > 0) {
        *idAtual = (*contas)[*totalContas - 1].numero + 1;
    }
    else {
        *idAtual = 1001;
    }
}

void salvarDados(Conta *contas, int totalContas) {
    FILE *arquivo = fopen("contas.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao salvar os dados!\n");
        return;
    }

    for (int i = 0; i < totalContas; i++) {
        fprintf(arquivo, "%d,%s,%.2f\n", contas[i].numero, contas[i].nome, contas[i].saldo);
    }
}

// Funções Utilitárias
int mostrarMenu() {
    int opcao;
    printf("\n===== SISTEMA BANCÁRIO =====\n");
    printf("1 - Criar Conta\n");
    printf("2 - Exibir Contas\n");
    printf("3 - Depositar\n");
    printf("4 - Sacar\n");
    printf("5 - Buscar Conta\n");
    printf("6 - Transferir\n");
    printf("7 - Deletar Conta\n");
    printf("8 - Editar Conta\n");
    printf("0 - Sair\n");
    printf("============================\n\n");
    
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    return opcao;
}

int contaExiste(Conta *contas, int totalContas, int numero) {
    if (totalContas == 0) {
        printf("Nenhuma conta cadastrada!\n");
        return -2;
    }

    for (int i = 0; i < totalContas; i++) {
        if (contas[i].numero == numero) {
            return i;
        }
    }

    return -1;
}

void carregando() {
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(1000);
}

// Funções do Sistema
void criarConta(Conta **contas, int *totalContas, int *ids) {
    Conta *temp = (Conta *) realloc(*contas, (*totalContas + 1) * sizeof(Conta));

    if (temp == NULL) {
        printf("Erro na realocação.\n");
        exit(1);
    }

    *contas = temp;

    int i = *totalContas;
    printf("--- CADASTRO ---\n");
    printf("Digite seu nome: ");
    fgets((*contas)[i].nome, 100, stdin);
    (*contas)[i].nome[strcspn((*contas)[i].nome, "\n")] = '\0';
    (*contas)[i].numero = *ids;
    (*contas)[i].saldo = 0.0;

    printf("Olá, %s! Sua conta foi criada com sucesso!\n", (*contas)[i].nome);

    printf("--- DADOS ---\n");
    printf("Número: %d\n", (*contas)[i].numero);
    printf("Nome: %s\n", (*contas)[i].nome);
    printf("Saldo: R$ %.2f\n", (*contas)[i].saldo);

    (*ids)++;
    (*totalContas)++;
}

void exibirContas(Conta *contas, int totalContas) {
    if (totalContas == 0) {
        printf("Nenhuma conta cadastrada!\n");
        return;
    }

    for (int i = 0; i < totalContas; i++) {
        printf("\n--- CONTA %d ---\n", i + 1);
        printf("Número: %d\n", contas[i].numero);
        printf("Nome: %s\n", contas[i].nome);
        printf("Saldo: R$ %.2f\n\n", contas[i].saldo);
    }
}

void depositar(Conta *contas, int totalContas) {
    int numero;
    printf("\nDigite o número da conta: ");
    scanf("%d", &numero);

    int i = contaExiste(contas, totalContas, numero);
    printf("Buscando conta.");
    carregando();

    if (i == -1) {
        printf("Conta não encontrada.\n");
        return;
    }
    if (i >= 0) {
        float valorDeposito;
        printf("\nInforme o valor dopósito: ");
        scanf("%f", &valorDeposito);

        if (valorDeposito <= 0) {
            printf("Valor Inválida.\n");
        }
        else {
            contas[i].saldo += valorDeposito;

            printf("\n--- DADOS ATUALIADOS ---\n");
            printf("Número: %d\n", contas[i].numero);
            printf("Nome: %s\n", contas[i].nome);
            printf("Saldo: R$ %.2f\n\n", contas[i].saldo);
        }
    }
}

void sacar(Conta *contas, int totalContas) {
    int numero;
    printf("\nDigite o numero da conta: ");
    scanf("%d", &numero);

    int i = contaExiste(contas, totalContas, numero);

    printf("Buscando conta.");
    carregando();

    if (i == - 1) {
        printf("Conta não encontrada.\n");
        return;
    }
    if (i >= 0) {
        float valorSaque;
        printf("\nInforme o valor do saque: ");
        scanf("%f", &valorSaque);

        if (valorSaque <= 0) {
            printf("Valor de saque inváido.\n");
        }
        else {
            if (valorSaque > contas[i].saldo) {
                printf("Saldo em conta insuficiente.\n");
            }
            else {
                contas[i].saldo -= valorSaque;

                printf("\n--- DADOS ATUALIZADOS ---\n");
                printf("Número: %d\n", contas[i].numero);
                printf("Nome: %s\n", contas[i].nome);
                printf("Saldo: R$ %.2f\n\n", contas[i].saldo);
            }
        }
    }
}

void buscarConta(Conta *contas, int totalContas) {
    int numero;
    printf("\nDigite o numero da conta: ");
    scanf("%d", &numero);

    int i = contaExiste(contas, totalContas, numero);

    printf("Buscando conta.");
    carregando();

    if (i == - 1) {
        printf("Conta não encontrada.\n");
        return;
    }
    if (i >= 0) {
        printf("\n--- DADOS ---\n");
        printf("Número: %d\n", contas[i].numero);
        printf("Nome: %s\n", contas[i].nome);
        printf("Saldo: R$ %.2f\n\n", contas[i].saldo);
    }
}

void transferir(Conta *contas, int totalContas) {
    int numeroOrigem;
    printf("\nInforme o número da conta de origem: ");
    scanf("%d", &numeroOrigem);

    int numeroDestino;
    printf("\nInforme o número da conta de destino: ");
    scanf("%d", &numeroDestino);

    int indiceOrigem = contaExiste(contas, totalContas, numeroOrigem);
    int indiceDestino = contaExiste(contas, totalContas, numeroDestino);

    printf("Buscando contas.");
    carregando();

    if (indiceOrigem == -1 && indiceDestino == -1) {
        printf("Contas não encontradas.\n");
        return;
    }
    if (indiceOrigem == -1) {
        printf("Conta de origem não encontrada.\n");
        return;
    }
    if (indiceDestino == -1) {
        printf("Conta de destino não encontrada.\n");
        return;
    }
    if (indiceOrigem >= 0 && indiceDestino >= 0) {
        float valorTranferencia;
        printf("\nInforme o valor da transferência: ");
        scanf("%f", &valorTranferencia);

        if (valorTranferencia <= 0) {
            printf("Valor inválido.\n");
        }
        else {
            if (valorTranferencia > contas[indiceOrigem].saldo) {
                printf("Saldo em conta insuficiente.\n");
            }
            else {
                contas[indiceOrigem].saldo -= valorTranferencia;
                contas[indiceDestino].saldo += valorTranferencia;

                printf("\n--- DADOS DA CONTA ORIGEM ---\n");
                printf("Número: %d\n", contas[indiceOrigem].numero);
                printf("Nome: %s\n", contas[indiceOrigem].nome);
                printf("Saldo: R$ %.2f\n\n", contas[indiceOrigem].saldo);

                printf("\n--- DADOS DA CONTA DESTINO ---\n");
                printf("Número: %d\n", contas[indiceDestino].numero);
                printf("Nome: %s\n", contas[indiceDestino].nome);
                printf("Saldo: R$ %.2f\n\n", contas[indiceDestino].saldo);
            }
        }
    }
}

void deletarConta(Conta **contas, int *totalContas) {
    int numero;
    printf("\nInforme o número da conta: ");
    scanf("%d", &numero);

    int indice = contaExiste(*contas, *totalContas, numero);

    if (indice == -1) {
        printf("Conta não encontrada.\n");
        return;
    }
    if (indice >= 0) {
        for (int i = indice; i < (*totalContas) - 1; i++) {
            (*contas)[i] = (*contas)[i + 1];
        }

        (*totalContas)--;

        Conta *temp = (Conta *) realloc(*contas, (*totalContas) * sizeof(Conta));

        if (temp == NULL) {
            printf("Erro ao realocar.\n");
            exit(1);
        }

        *contas = temp;

        printf("Conta deletada com sucesso!\n");
    }
}

void editarConta(Conta *contas, int totalContas) {
    int numero;
    printf("Informe o número da conta: ");
    scanf("%d", &numero);

    int indice = contaExiste(contas, totalContas, numero);

    printf("Buscando conta.");
    carregando();

    if (indice == -1) {
        printf("\nConta não encontrada!");
        return;
    }
    if (indice >= 0) {
        getchar();

        printf("\n--- DADOS DA CONTA ---\n");
        printf("Nome: %s", contas[indice].nome);
        printf("\nNovo nome: ");
        fgets(contas[indice].nome, 100, stdin);
        contas[indice].nome[strcspn(contas[indice].nome, "\n")] = '\0';
        
        printf("\n\n--- DADOS ATUALIZADOS ---\n");
        printf("Número: %d\n", contas[indice].numero);
        printf("Nome: %s\n", contas[indice].nome);
        printf("Saldo: R$ %.2f", contas[indice].saldo);
    }
}