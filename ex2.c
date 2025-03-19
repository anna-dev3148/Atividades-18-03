#include <stdio.h>
    int main (void) {
        float nota;
        float media;
        float soma = 0;
        int contador = 0;


        printf("Digite as notas do aluno (-5 para encerrar): ");
        scanf("%f", &nota);

        while(nota != -5) {
            soma += nota;
            contador++;
            media = (soma / contador);
        

        printf("Digite as notas do aluno (-5 para encerrar): ");
        scanf("%f", &nota);
        }

        printf("Média do aluno: %.2f", media);

        return 0;
    }