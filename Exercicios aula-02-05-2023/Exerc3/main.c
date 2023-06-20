#include <stdio.h>
#include <stdlib.h>

/* 
PEDIR AO USUARIO PARA DIGITAR 5 NOTAS E ARMAZENAR NO VETOR, 
CALCULAR A MEDIA E MOSTRAR O RESULTADO	
*/

int main(int argc, char *argv[]) {	

	float notas[5] = {0};
	float total = 0;
	float media = 0;
	int i;
	
	printf("Insira 5 notas: \n");
	
	for(i=0; i<5; i++)
	scanf("%f", &notas[i]);

	//somar valores e jogar na variavel total
	
	for(i=0; i<5; i++)
	total += notas[i];
	
	
	media = total / 5;
	printf("A media do aluno e %.2f", media);


	return 0;
}
