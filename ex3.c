#include <stdio.h>

int main (void) {
	int lado1;
	int lado2;
	int lado3;
	
	while ( lado1 != -1 ){
		printf("Digite o valor do [lado_1] do triangulo (-1 para encerrar o programa): ");
		scanf("%d", &lado1);
		
		if ( lado1 == -1 ){
			printf("Programa encerrado!");
			return 0;
		}
		
		printf("Digite o valor do [lado_2] do triangulo: ");
		scanf("%d", &lado2);
		
		printf("Digite o valor do [lado_3] do triangulo: ");
		scanf("%d", &lado3);
		
		if ( (lado1 * lado1) + (lado2 * lado2) == (lado3 * lado3) ){
			printf("os lados representam um triangulo retangulo\n");
			
		} else {
			if ( (lado1 * lado1) + (lado3 * lado3) == (lado2 * lado2) ){
				printf("os lados representam um triangulo retangulo\n");
				
			} else {
					if ( (lado2 * lado2) + (lado3 * lado3) == (lado1 * lado1) ){
					printf("os lados representam um triangulo retangulo\n");
					
				} else {
					printf("os lados NAO representam um triangulo retangulo\n");
				}
			}
		}
	}
	
	return 0;
}