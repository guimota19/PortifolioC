#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int m, n;
	
	int matriz[5][5] = {{ 1, 2, 3, 4, 5},
						{ 6, 7, 8, 9, 10},
						{11, 12, 13, 14, 15},
						{16, 17, 18, 19, 20},
						{21, 22, 23, 24, 25}};

	for(m = 0; m<5 ;++m){
		for(n = 0; n<5 ; ++n){
			scanf("%i", matriz[m][n]);
		}
		printf("\n");
	}

	return 0;
}
