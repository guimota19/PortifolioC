#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

/* */

int main(void) 
{
	setlocale(LC_ALL,"");	
	
	int numeros [TAM];
	int i, aux, contador;
	
	printf("ENTRE COM OS DEZ NUMEROS PARA PREENCHER O ARRAY, E PRESSIONE ENTER APOS DIGITAR CADA VALOR: \n");
	
	for(i=0; i <TAM; i++)
	{
		scanf("%d", &numeros[i]);
	}
	printf("ORDEM ATUAL DOS ITENS DO ARRAY: \n");
	for(i=0; i < TAM; i++)
	{
		printf("%4d", numeros[i]);
	}
	
	for(contador=1; contador<TAM; contador++)
	{
		for(i=0;i<TAM - 1;i++);
		{
			if(numeros[i] > numeros[i+1])
			{
				aux = numeros[i];
				numeros[i] = numeros[i+1];
				numeros[i+1] = aux;
			}
		}
	}
	printf("\nELEMENTOS DO ARRAY EM ORDEM CRESCENTE: \n");
	for(i=0; i<TAM; i++)
	{
		printf("%4d",numeros[i]);
	}
	printf("\n");
	
	return 0;
}
