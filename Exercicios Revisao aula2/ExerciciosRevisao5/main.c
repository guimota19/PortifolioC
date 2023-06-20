#include <stdio.h>
#include <stdlib.h>

// Exercicios revisão aula 21/03
// Guilherme dos Santos Mota

//OBS NAO CONSEGUI COLOCAR CASA DECIMAL
// E A VARIAVEL VENDEDOR TA DANDO ERRO QND ESTA NO INICIO


int main(int argc, char *argv[]) {
	
	int a, b, c, d, com, tot;

	
	printf("Salario: ");
	scanf("%d",&b);
	
	printf("Vendas: ");
	scanf("%d",&c);
	
	printf("Vendedor: ");
	scanf("%d",&a);
	
	com = c * 0.15;
	tot = com + b;
	
	printf("Total: %d",tot);
	
	return 0;
}
