#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int nota, ministrada, presenca;
	
	
	printf("Nota final: ");
	scanf("%d",&nota);
	
	printf("Aulas ministradas: ");
	scanf("%d",&ministrada);
	
	printf("Total de presencas: ");
	scanf("%d",&presenca);
	
	if(nota < 6){
		printf("Nota final menor que 6, reprovado.");
	} else if(presenca < ministrada*0.75){
		printf("A frequencia foi menor que 75 por cento, reprovado");
	} else {
		printf("Aluno Aprovado!");
	}
	
	
	return 0;
}
