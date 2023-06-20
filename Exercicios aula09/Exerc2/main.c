#include <stdio.h>
#include <stdlib.h>

/* CALCULAR A FORCA DIGITANDO A MASSA E ACELERACAO E PODERA TAMBEM, CALCULAR A AREA E O
PERIMETRO DE UM CIRCULOO, DIGITANDO O RAIO. UTILIZE A ESTRUTURA SWITCH, E DO_WHILE */

int main(int argc, char *argv[]) {
	
	int opcao;
	float massa, aceleracao, raio, area, perimetro, forca;
	
	do {
		printf("Escolha uma opcao: \n");
		printf("0 - Sair do programa \n");
		printf("1 - Calcular a forca \n");
		printf("2 - Calcular a area e o perimetro de um circulo \n");
		scanf("%d",&opcao);
		
		switch (opcao){
			case 0:
				printf("Saindo do programa. \n")
				break;
				
			case 1:
				printf("Digite a massa: ");
				scanf("%f", &massa);
				
				printf("Digite a aceleracao: ");
				scanf("%f", &aceleracao);
			
				forca = massa * aceleracao;
				printf(" A forca e: %.2f N\n",forca);
				
				break;
				
			case 2: 
				printf("Digite o raio: ");
				scanf("%f", &raio);
				
				area = M_PI * pow(raio, 2);
				perimetro = 2 * M_PI * raio;
				printf("A area e: %.2f m^2\n", area);
				
				printf("O perimetro e: %.2f m\n", perimetro);
				
				break;
				
			case 0:
				printf("Saindo do programa. \n")
					
				break;
					
					default:
						printf("Opcao invalida \n");
						
						break;
					}
			} while (opcao != 0);	
				
				
		}
		
		
		
		
		
		
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
