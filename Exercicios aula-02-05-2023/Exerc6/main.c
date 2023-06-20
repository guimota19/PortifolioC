#include <stdio.h>
#include <stdlib.h>

/* 
Missão: criar um programa que execute uma matriz 3x3, 
em que os valores sao lancados de acordo com a linha e coluna, e a mesma e montada no formato da matriz.
*/

int main(int argc, char *argv[]) {
	
	int matriz [3][3];
	int i, j;
	
	for (i = 0; i<3;i++){
		for(j = 0; j <3; j++){
			matriz[i][j] = i*3 + j + 1;
		}
	}
	
	printf("Matriz 3x3: \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j <3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
