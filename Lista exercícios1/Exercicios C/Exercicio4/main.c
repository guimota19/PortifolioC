#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		
	int idade;
	
	printf("Infome sua idade: ");
	scanf("%d",&idade);
	
	if(idade> 70){
		printf("Velho");
		
	} else if(idade > 21 && idade <= 70){
		printf("Adulto!");
		
	} else if(idade <=21){
		printf("Jovem!");
	}
	
	
	return 0;
}
