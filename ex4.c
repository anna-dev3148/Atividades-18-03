#include <stdio.h> 
int main (void) {
    float raio;
    float pi = 3.14;
    
    
     printf("Digite o raio do circulo: ");
     scanf("%f", &raio);
     
     float diametro = 2*raio;
     printf("Diametro: %.2f \n", diametro);
     
     float circunferencia = 2*pi*raio;
     printf( "Circunferência: %.2f \n", circunferencia);
     
     float area = pi*(raio*raio);
     printf( "Área: %.2f \n", area);
     
     
    return 0;
}