#include <stdio.h>
#include <stdlib.h>

/* 


*/

int main() {
	
	char nome[80];
	
	printf("Digite o seu nome: ");
	gets(nome);	// le o texto do teclado
	
	printf("Saudacoes, %s .\n",nome);
	
	system("PAUSE");
	
	return 0;
}
