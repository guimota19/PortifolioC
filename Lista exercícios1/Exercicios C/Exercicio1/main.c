#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int nota1, nota2, nota3, nota4, nota5, soma, valfin;
	
	printf("---- MEDIA FINAL ----\n");
	
	printf("Nota 1: ");
	scanf("%d",&nota1);
	
	printf("Nota 2: ");
	scanf("%d",&nota2);
	
	printf("Nota 3: ");
	scanf("%d",&nota3);
	
	printf("Nota 4: ");
	scanf("%d",&nota4);
	
	printf("Nota 5: ");
	scanf("%d",&nota5);
	
	soma = nota1 + nota2 + nota3 + nota4 + nota5;
	
	valfin = soma / 5;
	
	printf("O valor da media final e: %d",valfin);
	
	
	return 0;
}
