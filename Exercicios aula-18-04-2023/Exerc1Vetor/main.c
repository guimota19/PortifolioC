#include <stdio.h>
#include <stdlib.h>

/*	Fazer um progerama para pedir ao ususario para digitar 5 notas,
	armazenar no vetor, calcular a media e retornar o valor ao usuario. */

int main(int argc, char *argv[]) {
	
	float notas[4];
	float total = 0;
	float media = 0;
	
	printf("Nota 1: ");
	scanf("%f",&notas[0]);
	
	printf("Nota 2: ");
	scanf("%f",&notas[1]);
	
	printf("Nota 3: ");
	scanf("%f",&notas[2]);
	
	printf("Nota 4: ");
	scanf("%f",&notas[3]);
	
	printf("Nota 5: ");
	scanf("%f",&notas[4]);
	
	total = notas[0] + notas[1] + notas[2] + notas[3] + notas[4];
	
	media = total / 5;
	
	printf("Media: %.2f",media); 

	
	
	
	return 0;
}
