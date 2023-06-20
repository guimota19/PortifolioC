#include <stdio.h>
#include <stdlib.h>

/* 
USAR A ESTRUTURA CONDICONAL ENCADEADA, EM QUE SERAO ANALISADOS OS TIPO DE TRIANGULO, 
PARTINDO DA PREMISSA QUE ELE DEVERA SER TESTADO ANTES PARA VERIFICAR OU NAO UM TRIANGULO.

TIPO DE TRIANGULO: EQUILATERO, ISOSCELES, ESCALENO
*/

int main(int argc, char *argv[]) {
	
	float l1, l2, l3;
	
	
	printf("Lado 1: ");
	scanf("%f",&l1);
	
	printf("Lado 2: ");
	scanf("%f",&l2);
	
	printf("Lado 3: ");
	scanf("%f",&l3);
	
	if( (l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1) ){
	if(l1 == l2 && l2 == l3){
		printf("Equilatero");
	} else if(l1 == l2 || l1 ==l3 || l2 == l3){
		printf("Isosceles");
	} else if(l1 != l2 && l2 != l3){
		printf("Escaleno");
	} 
	} else {
		printf("Nao e um triangulo");
	}

	
	
	
	return 0;
}
