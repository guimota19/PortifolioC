#include <stdio.h>
#include <stdlib.h>

/*
Elabore um programa que faça o sorteio de vários números e ao final 
mostra:

a) A quantidade de números sorteados;
b) O Maior numero sorteado;
c) Quantos números pares foram sorteados;

Observação: O programa deve finalizar quando for sorteado o valor 0 
(zero)e utilizar no máximo 3 variáveis não utilizar vetores ou matrizes. 

OBS: NAO CONSEGUI UTILIZAR NO MAXIMO 3 VARIAVEIS
*/

int main(int argc, char *argv[]) {
	
	int a, q = 0, m = 0, p = 0;

    srand(time(NULL)); 				//Gerador de números aleatórios

    do {
        a = rand() % 101; 
        printf("%d \n", a);

        if (a > 0) {
            q++; 

            if (a > m) {
                m = a; 
            }

            if (a % 2 == 0) {
                p++; 
            }
        }
    } while (a != 0);

	printf("\n------------------------------------------------");
    printf("\nNumeros sorteados: %d\n", q);
    printf("Maior numero sorteado: %d\n", m);
    printf("Numeros pares sorteados: %d\n", p);
	
	
	
	
	
	return 0;
}
