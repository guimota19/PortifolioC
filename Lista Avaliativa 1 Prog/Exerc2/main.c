#include <stdio.h>
#include <stdlib.h>

/* 
Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem
1,10 metro e cresce 3 centímetros por ano. 

Faça um programa em C que recebendo a altura e o crescimento anual de duas pessoas calcule e
imprima quantos anos serão necessários para que a mais baixa seja maior que a outra. 

Caso isto não ocorra em 100 anos informar mensagem de impossibilidade.

Encerre a entrada de dados quando for digitada uma idade negativa.
(Não use vetores ou matrizes).

 */

int main() {
	
    float altura1 = 0, altura2 = 0, crescimento1 = 0, crescimento2 = 0, maior, menor;
    int anos;
    
    printf("Digite a altura da primeira pessoa: ");
    scanf("%f", &altura1);
    printf("Digite o crescimento anual da primeira pessoa: ");
    scanf("%f", &crescimento1);
    
    printf("Digite a altura da segunda pessoa: ");
    scanf("%f", &altura2);
    printf("Digite o crescimento anual da segunda pessoa: ");
    scanf("%f", &crescimento2);
    
    if(altura1 > altura2){
    	maior = altura1;
    	menor = altura2;
	} else if(altura2 > altura1){
		maior = altura2;
    	menor = altura1;
	}
	
	anos = 0;
	
	while (maior > menor && anos <= 100){
		
	altura1 += crescimento1;
	
    altura2 += crescimento2;
    
    anos++;
	
    }
    
    if (anos <= 100) {
        printf("Serão necessários %d anos para que a pessoa mais baixa seja maior do que a outra.\n", anos);
    } else {
        printf("Impossivel atingir essa condicao em 100 anos.\n");
    }
    
    printf("%f",altura1);
    printf("\n%f",altura2);
    printf("anos: %d",anos);

	return 0;
}
























