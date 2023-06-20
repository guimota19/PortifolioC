#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int base, altura;
	float valf;
	
	printf("--- CALCULAR A AREA DE UM TRIANGULO ---\n");
	
	printf("Qual o valor da base: ");
	scanf("%d",&base);
	
	printf("Qual o valor da altura: ");
	scanf("%d",&altura);
	
	valf = (base * altura) / 2;
	
	printf("A area do triangulo e de: %.2f",valf);
	
	
	return 0;
}
