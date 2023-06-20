#include <stdio.h>
#include <stdlib.h>

/* 
puts() - ela complementa a funcao gets(). o proposito do puts() e imprimir uma unica string por vez
Exemplo: mostra impressao de string com puts().		
*/

int main() {
	
	char nome[80];
	printf("Digite seu nome: ");
	gets(nome); // le o texto do teclado
	puts("Saudacoes, "); //imprime o texto no video
	puts(nome);
	puts("puts() pula de linha sozinha");
	puts(&nome[4]);
	system("PAUSE");
	
	return 0;
}
