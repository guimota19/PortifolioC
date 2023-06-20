#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float A, B, C, tri, circ, tra, qua, ret;
	
	printf("Valor A: ");
	scanf("%f",&A);
	
	printf("Valor B: ");
	scanf("%f",&B);
	
	printf("Valor C: ");
	scanf("%f",&C);
	
	tri = (A * C) / 2;
	
	circ = 3.14159 * (C * C);
	
	tra = (A + B) / 2 * C;

	qua = B * B;
	
	ret = A * B;
	
	printf("\n ---- TOTAL ---- \n");
	
	printf("TRIANGULO: %.3f \n",tri);
	printf("CIRCULO: %.3f \n",circ);
	printf("TRAPEZIO: %.3f \n",tra);
	printf("QUADRADO: %.3f \n",qua);
	printf("RETANGULO: %.3f \n",ret);
	
	
	
	return 0;
}
