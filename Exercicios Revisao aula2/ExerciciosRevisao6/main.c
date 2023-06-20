#include <stdio.h>
#include <stdlib.h>

/*  Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor
unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário
de cada peça 2. Após, calcule e mostre o valor a ser pago. */

// Exercicios Revisao - Guilherme dos Santos Mota

int main(int argc, char *argv[]) {
	
	//variaveis:
	float cod1, num1, val1, cod2, num2, val2, tot1, tot2, totf;
	
	//codigo:
	printf("Codigo peca 1: ");
	scanf("%f",&cod1);
	printf("Numero peca 1: ");
	scanf("%f",&num1);
	printf("Valor peca 1: ");
	scanf("%f",&val1);
	
	printf("Codigo peca 2: ");
	scanf("%f",&cod2);
	printf("Numero peca 2: ");
	scanf("%f",&num2);
	printf("Valor peca 2: ");
	scanf("%f",&val2);
	
	tot1 = val1 * num1;
	tot2 = val2 * num2;
	totf = tot1 + tot2;
	
	printf("VALOR A PAGAR: R$ %.2f",totf);
	
	
	
	
	
	
	
	return 0;
}
