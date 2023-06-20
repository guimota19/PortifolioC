#include <stdio.h>
#include <stdlib.h>

// Exercicios revisão aula 21/03
// Guilherme dos Santos Mota

int main(int argc, char *argv[]) {
	
	int a, b, c, d, DIFERENCA;
	
	printf("Valor A: ");
	scanf("%d",&a);
	
	printf("Valor B: ");
	scanf("%d",&b);
	
	printf("Valor C: ");
	scanf("%d",&c);
	
	printf("Valor D: ");
	scanf("%d",&d);
	
	DIFERENCA = (a * b - c * d);
	
	printf("Diferenca: %.2d",DIFERENCA);
	
	
	return 0;
}
