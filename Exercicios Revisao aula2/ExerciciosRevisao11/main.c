#include <stdio.h>
#include <stdlib.h>

/* Construa um algoritmo que receba como entrada três valores e os imprima em ordem  crescente.  */

int main(int argc, char *argv[]) {
	
	int a, b, c;
	
	printf("Valor 1: ");
	scanf("%d",&a);
	
	printf("Valor 2: ");
	scanf("%d",&b);	
	
	printf("Valor 3: ");
	scanf("%d",&c);
	
	if(a > b && b > c){
		printf("%d \n %d \n %d ",a,b,c);
	} else if(a > c && c > b){
		printf("%d \n %d \n %d ",a,c,b);
	}  else if(b > a && a > c){
		printf("%d \n %d \n %d ",b,a,c);
	} else if(b > c && c > a){
		printf("%d \n %d \n %d ",b,c,a);
	} else if(c > a && a > b){
		printf("%d \n %d \n %d ",c,a,b);
	} else if(c > b && b > a){
		printf("%d \n %d \n %d ",c,b,a);
	}
	
	
	return 0;
}
