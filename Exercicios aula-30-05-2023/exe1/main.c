#include <stdio.h>
#include <stdlib.h>

/* 

QSORT()	- executa a ordenação de uma matriz por meio de algoritmo quick sort.
A função é do void que recebe quatro argumentos:

1 - é o endereço da matriz a ser ordenado.

2 - é um inteiro com número de elementos da matriz 

3 - tamnho em bytes de um elemento da matriz

4 - o endereço de uma função com os seguintes propósitos int compara(const void *, const void *)

a função compara() deve ser escrita pelo usuário de qsort() e compara dois elementos da matriz. 
valor retornado
pela função compara()					Descrição:
	< 0  							elem1 menor que elem2
	= 0								elem1 igual a elem2
	> 0								elem1 maior que elem2

*/

// ORDERNAR NÚMEROS INTEIROS
// ALGORITMO QSORT COM INTEIRO

//função para comparar inteiros

int compara(const void *a, const void *b){
	
	const int *pa = (const int *)a; 	//modifica o tipo de ponteiro
	const int *pb = (const int *)b; 	//modifica o tipo de ponteiro
	

	//retorna negativo se a < b e positivo a > b
	
	return *pa - *pb;
}

int main(){
	
	unsigned int tamanho, i;
	
	int tab[] = {234, 760, 162, 890, -23, 914, 567, 888, 398, -45};
	
	tamanho = sizeof(tab) / sizeof(int);
	
	qsort(tab, tamanho, sizeof(int), compara);
	
	for(i =0; i<8; i++) print("%d\n",tab[i]);
	
	return 0;
}





















