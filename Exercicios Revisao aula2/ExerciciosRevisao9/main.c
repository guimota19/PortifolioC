#include <stdio.h>
#include <stdlib.h>
/* 
Fa�a um algoritmo que leia dois n�meros A e B e imprima o maior deles.
*/

int main(int argc, char *argv[]) {
	
	int A, B, N;
	
	printf("---- MAIOR NUMERO --- \n");
	printf("Numero A: ");
	scanf("%d",&A);
	printf("Numero B: ");
	scanf("%d",&B);
	
	if(A > B){
		printf("Maior: %d",A);
	} else {
		printf("Maior: %d \n",B);
	}
	
	
	return 0;
}
