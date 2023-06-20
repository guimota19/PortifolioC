#include <stdio.h>
#include <stdlib.h>
/* 
1. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes,
coletando dados sobre o salário e o número de filhos. A prefeitura deseja
saber:

a) média salarial da população;		OK
b) média do número de filhos; 		OK
c) maior salário;					OK
d) percentual de pessoas com salário até R$ 100,00.		naoOk

O final da leitura de dados se dará com a entrada de um salário negativo
*/

int main(int argc, char *argv[]) {
	
	int numFi, contPes, contSal;
    float sal, somaSal, medSal, maiSal, medFi;

    printf("Digite o salario: ");
    scanf("%f", &sal);

    while (sal >= 0) {
        printf("Digite o numero de filhos: ");
        scanf("%d", &numFi);

        contPes++;
        somaSal += sal;
        medFi = (medFi * (contPes - 1) + numFi) / contPes;

        if (sal > maiSal) {
            maiSal = sal;
        }

        if (sal <= 100) {
            contSal++;
        }

        printf("Digite o salario: ");
        scanf("%f", &sal);
    }

    medSal = somaSal / contPes;
    float perSal = (float) contSal / contPes * 100;


	printf("\n------------------------------------------\n");
    printf("\nMedia salarial de R$%.2f", medSal);
    printf("\nMedia de %.2f filhos.", medFi);
    printf("\nMaior salario R$%.2f", maiSal);
    printf("\nPessoas com salario ate R$ 100,00: %.2f%%", perSal);

	
	return 0;
}
