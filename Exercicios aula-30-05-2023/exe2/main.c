#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NOME_MAX 30
#define TAM_MAX 100

/*  
Será mostrado a ordenacao de nomes por meio de matriz de ponteiro
Ordenar os proprios nomes, ordenando a matriz de ponteiros em que cada elemento apara para um dos nomes.
Os elementos da matriz de ponteiro sao ponteiros que apontam para outros ponteiros*
*/

//pstrsort
//MOSTRA O USO DE PONTEIROS PARA PONTEIROS


void orderna(char **p, int n)
{
	char *temp;
	int i, j;
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n;j++){
			if(strcmp(p[i], p[j])>0)
			{
				temp = *(p+1);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	
}

int main()
{
	
	char nomes[NOME_MAX][TAM_MAX];
	char *p[30]; //matriz de ponteiros
	int n, i;
	
	
	for(n=0;; n++)
	{
		printf("Digite o nome ou [ENTER] para fim: ");
		gets(nomes[n]);
		if(strlen(nomes[n])==0) break;
		p[n] = nomes[n];
	}
	printf("\n\nLista Original: \n");
	for(i=0; i<n;i++)
	printf("%s\n", p[i]);
	ordena(p, n);
	
	
	printf("\n\nLista Ordenada: \n");
	for(i=0; i<n; i++)
	printf("%s\n",p[i]);

	return 0;
	
	
}




