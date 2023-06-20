#include <stdio.h>

#define MAX_EMPRESAS 50  // número máximo de empresas
#define MAX_FUNCIONARIOS 1000  // número máximo de funcionários por empresa

/*	CRIAR UM PROGRAMA UTILIZANDO VETOR: O PROGRAMA DEVERA PEDIR O NOME DA EMPRESA, O NUMERO DE FUNCIONÁRIOS, 
	A MATRICULA EO SALARIO DO FUNCIONÁRIO. AO CONCLUIR O PROGRAMA DEVERÁ IMPRIMIR NA TELA TODAS AS MATRICULAS E OS SALARIOS DIGITADOS.  */

struct Funcionario {
    int matricula;
    float salario;
};

struct Empresa {
    char nome[50];
    int num_funcionarios;
    struct Funcionario funcionarios[MAX_FUNCIONARIOS];
};

int main() {
    int num_empresas, i, j;
    struct Empresa empresas[MAX_EMPRESAS];

    printf("Digite o numero de empresas: ");
    scanf("%d", &num_empresas);

    // Leitura das informações de todas as empresas e seus funcionários
    for (i = 0; i < num_empresas; i++) {
        printf("\nDigite o nome da empresa %d: ", i+1);
        scanf(" %[^\n]s", empresas[i].nome);  // lê a linha inteira até o \n (inclusive espaços)

        printf("Digite o numero de funcionarios da empresa %d: ", i+1);
        scanf("%d", &empresas[i].num_funcionarios);

        printf("Digite as informacoes de cada funcionario:\n");
        for (j = 0; j < empresas[i].num_funcionarios; j++) {
            printf("  \nMatricula do funcionario %d: ", j+1);
            scanf("%d", &empresas[i].funcionarios[j].matricula);
            printf("  Salario do funcionario %d: ", j+1);
            scanf("%f", &empresas[i].funcionarios[j].salario);
        }
    }

    // Impressão das matrículas e salários de todos os funcionários
    printf("\nMatriculas e salarios dos funcionarios:\n");
    for (i = 0; i < num_empresas; i++) {
        printf("\nEmpresa %d (%s):\n", i+1, empresas[i].nome);
        for (j = 0; j < empresas[i].num_funcionarios; j++) {
            printf("  Matricula: %d\n", empresas[i].funcionarios[j].matricula);
            printf("  Salario: R$ %.2f\n", empresas[i].funcionarios[j].salario);
        }
    }

    return 0;
}

