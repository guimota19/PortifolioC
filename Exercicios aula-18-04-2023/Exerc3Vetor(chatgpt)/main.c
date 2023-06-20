#include <stdio.h>

#define MAX_EMPRESAS 50  // n�mero m�ximo de empresas
#define MAX_FUNCIONARIOS 1000  // n�mero m�ximo de funcion�rios por empresa

/*	CRIAR UM PROGRAMA UTILIZANDO VETOR: O PROGRAMA DEVERA PEDIR O NOME DA EMPRESA, O NUMERO DE FUNCION�RIOS, 
	A MATRICULA EO SALARIO DO FUNCION�RIO. AO CONCLUIR O PROGRAMA DEVER� IMPRIMIR NA TELA TODAS AS MATRICULAS E OS SALARIOS DIGITADOS.  */

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

    // Leitura das informa��es de todas as empresas e seus funcion�rios
    for (i = 0; i < num_empresas; i++) {
        printf("\nDigite o nome da empresa %d: ", i+1);
        scanf(" %[^\n]s", empresas[i].nome);  // l� a linha inteira at� o \n (inclusive espa�os)

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

    // Impress�o das matr�culas e sal�rios de todos os funcion�rios
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

