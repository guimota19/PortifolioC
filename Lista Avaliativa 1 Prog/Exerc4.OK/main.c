#include <stdio.h>
#include <stdlib.h>

/* 
Elabore um programa que receba como dados de entrada duas notas de vários alunos
e ao final mostra:

a) A quantidade de alunos com media maior ou igual a 7,0;
b) A Menor media da Turma;
c) A Media geral da turma;
d) Quantas vezes o programa rodou;

Observação: O programa deve finalizar quando for digitado o valor 0 
(zero) e utilizar no
máximo 6 variáveis não utilizar vetores ou matrizes.

OBS: NAO COSEGUI UTILIZAR SO 6 VARIAVEIS
*/

int main(int argc, char *argv[]) {

	float n1, n2, med, menMed = 10.0, somMed = 0.0;
    int qtAlunos = 0, qtMed7 = 0, qtExec = 0;
    
    do {
        printf("\nDigite a primeira nota: ");
        scanf("%f", &n1);
        
        if (n1 != 0) {
            printf("Digite a segunda nota: ");
            scanf("%f", &n2);
            
            med = (n1 + n2) / 2;
            somMed += med;
            qtAlunos++;
            qtExec++;
            
            if (med >= 7.0) {
                qtMed7++;
            }
            
            if (med < menMed) {
                menMed = med;
            }
        }
    } while (n1 != 0);
    
    printf("\n-------------------------------------------------------------\n");
    printf("\nAlunos com media maior ou igual a 7: %d\n", qtMed7);
    printf("Menor media: %.1f\n", menMed);
    printf("Media da turma: %.1f\n", somMed / qtAlunos);
    printf("Quantidade de vezes que o programa rodou: %d\n", qtExec);
	
	return 0;
}
