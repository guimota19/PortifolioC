#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* MOSTRAR COMO DEFINIR */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL," ");
	char nome[80];
	printf("Digite o seu nome: ");
	scanf("%s",&nome);
	printf("Saudacoes, %s. \n",nome);
	system("PAUSE");
	
	
	
	return 0;
}
