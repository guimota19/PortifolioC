#include <stdio.h>
#include <stdlib.h>

/* 
Desenvolva um programa que calcula a metragem quadrada de um terreno, usando o teste no final para criar a opção de digitar novos 
valores sem sair do programa.

O programa deverá pedir ao usuário para digitar a metragem1 do terreno, a metragem 2 e em seguida mostrar o tamanho total do terreno em 
metros quadrados. O programa deverá perguntar ao usuário se ele quer continuar para digitar outras metragens ou encerrar o programa. 
*/

int main(int argc, char *argv[]) {

	float metragem1, metragem2, area;
    char continuar;

    do {
     	printf("Digite a metragem1 do terreno em metros: ");
        scanf("%f", &metragem1);

        printf("Digite a metragem2 do terreno em metros: ");
        scanf("%f", &metragem2);

        area = metragem1 * metragem2;

        printf("O tamanho total do terreno e de %.2f metros quadrados\n", area);

        printf("Deseja calcular outra area? (S/N)\n");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');
	
	
	return 0;
}
