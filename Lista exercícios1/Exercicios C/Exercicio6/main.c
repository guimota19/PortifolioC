#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n;
	
	printf("Informe um numero: ");
	scanf("%f", &n);
	
	if(n > 10){
		printf("o numero e maior que 10");
	} else if(n < 10){
		printf("o numero e menor que 10");
	} else if (n == 10){
		printf("voce acertou!");
	}
	
	
	
	return 0;
}
