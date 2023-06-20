#include <stdio.h>
#include <stdlib.h>

/* OBS NAO CONSEGUI GRAVAR O NOME DENTRO DA VARIAVEL, CONSEGUI SALVAR APENAS 1 CARACTERE.

	E NAO CONSEGUI FAZER A MULTIPLICACAO DA VENDO PELA PORCENTAGEM
*/

int main(int argc, char *argv[]) {
	
	char v1nome, v2nome, v3nome;
	float venda1, venda2, venda3, com1, com2, com3;
	
	printf("Vendedor1: ");
	//scanf("%c",&v1nome);
	printf("Valor venda do vendedor1: ");
	scanf("%f",&venda1);
	
	printf("Vendedor2: ");
	//scanf("%c",&v2nome);
	printf("Valor venda do vendedor2: ");
	scanf("%f",&venda2);

	printf("Vendedor3: ");
	//scanf("%c",&v3nome);
	printf("Valor venda do vendedor1: ");
	scanf("%f",&venda3);
	
	if(venda1 > 50.000){
		com1 = venda1 * 0.12;
	} else if(venda1 >= 30.000 && venda1 <= 50.000){
		com1 = venda1 * 0.9;
	} else {
		com1 = venda1 * 0.7;
	}
	
	if(venda2 > 50.000){
		com2 = venda2 * 0.12;
	} else if(venda2 >= 30.000 && venda2 <= 50.000){
		com2 = venda2 * 0.9;
	} else {
		com2 = venda2 * 0.7;
	}


	if(venda3 > 50.000){
		com3 = venda3 * 0.12;
	} else if(venda3 >= 30.000 && venda3 <= 50.000){
		com3 = venda3 * 0.9;
	} else {
		com3 = venda3 * 0.7;
	}
	
	printf("\n ----- RELATORIO VENDEDOR 1 ----- \n ");
	printf("Vendedor1 \n valor da venda: R$ %.2f \n comissao: R$ %.2f \n", venda1, com1);
	
	printf("\n ----- RELATORIO VENDEDOR 2 ----- \n ");
	printf("Vendedor2 \n valor da venda: R$ %.2f \n comissao: R$ %.2f \n", venda2, com2);
	
	printf("\n ----- RELATORIO VENDEDOR 3 ----- \n ");
	printf("Vendedor3 \n valor da venda: R$ %.2f \n comissao: R$ %.2f \n", venda3, com3);
	
	
	
	
	
	
	
	
	return 0;
}
