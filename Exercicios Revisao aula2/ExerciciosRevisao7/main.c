#include <stdio.h>
#include <stdlib.h>

/*                OBS: NÃO CONSEGUI FAZER ESSA QUESTÃO :(              */

int main(int argc, char *argv[]) {
	
	
	float R, vol, a, tot, pi, raio3;
	
	printf("Informe o raio: ");
	scanf("%f",&R);
	
	pi = 3.14159;
	
	raio3 = R * R * R;
	
	a = 4 / 3;
	
	tot = a * pi * raio3;

	printf("VOLUME: %f",tot);
	
	return 0;
}
