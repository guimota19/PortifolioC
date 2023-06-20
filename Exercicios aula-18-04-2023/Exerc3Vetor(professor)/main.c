#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* CRIAR UM PROGRAMA UTILIZANDO VETOR: O PROGRAMA DEVERPA PEDIR O NOME DA EMPRESA, O NÚMERO DE FUNCIONÁRIOS, A MATRICULA E O SALARIO DO FUNCIONARIO
AO CONCLUIR O PROGRAMA DEVERÁ IMPRIMIR NA TELA TODAS AS MATRICULAS E OS SALARIOS DIGITADOS.*/

int main(int argc, char *argv[]) {
	
	float sal[2];
	int mat[2];
	char nome[50];
	int i, nfunc;
	
	printf("Digite o nome da empresa: ");
	gets(nome);
	
	printf("Digite o numero de funcionarios: ");
	scanf("%d", &nfunc);
	
	for(i=0;i<nfunc;i++);
	{
		printf("Digite a matricula e o salario do funcionario (%d) =", i+1);
		scanf("%d %f",&mat[i], &sal[i]);
	}
	printf("Empresa %s \n",nome);
	printf("Matricula - Salario \n");
	
	for(i=0; i<nfunc ; i++){
		printf("%10d %10.2f\n",mat[i], sal[i]);
	}
	getch();
	
	return 0;
}
