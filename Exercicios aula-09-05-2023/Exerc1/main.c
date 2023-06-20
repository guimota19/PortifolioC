#include <stdio.h>
#include <stdlib.h>

/* STRUCT */
	
	struct facil{ 	//define o tipo de dado
		int num;  	// inteiro do registro
		char ch; 	// caractere no registro
	};
	
	
	int main() {
	
	struct facil reg1; 	// declara reg1 como tipo do registro
	
	reg1.num = 2;
	reg1.ch = 'Z';
	
	printf("reg1.num = %d, reg1.ch = %c", reg1.num, reg1.ch);
	
	return 0;
}
