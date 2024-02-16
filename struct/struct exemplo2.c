/*Agora, modifique o programa anterior para incluir uma fun��o que calcula a dist�ncia entre dois pontos.
Use a f�rmula da dist�ncia entre dois pontos no plano cartesiano:*/

#include <stdio.h>
#include <math.h>

typedef struct coordenadas {
    float x1;
    float y1;
    float x2;
    float y2;
} ponto;

// Prot�tipo da fun��o distancia
float distancia(float x1, float x2, float y1, float y2);

int main() {
    float res;

    // Criando uma vari�vel do tipo ponto
    ponto pontos;

    printf("Insira o valor de x para o ponto 1: ");
    scanf("%f", &pontos.x1);

    printf("Insira o valor de y para o ponto 1: ");
    scanf("%f", &pontos.y1);

    printf("Insira o valor de x para o ponto 2: ");
    scanf("%f", &pontos.x2);

    printf("Insira o valor de y para o ponto 2: ");
    scanf("%f", &pontos.y2);

    res = distancia(pontos.x1, pontos.x2, pontos.y1, pontos.y2);

    printf("\nDistancia entre os pontos: %f\n", res);

    return 0;
}

// Fun��o para calcular a dist�ncia entre dois pontos
float distancia(float x1, float x2, float y1, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
