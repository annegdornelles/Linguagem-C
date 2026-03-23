/*. Faça um programa que leia um valor de comprimento em centímetros e apresente-o convertido
em polegadas. A fórmula de conversão é: P = C
2,54
, sendo C o comprimento em centímetros e P o
comprimento em polegadas.*/

#include<stdio.h>

int main(){
    float cm, pol;

    printf("\n Insira o valor em cm:");
    scanf("%f", &cm);

    pol = cm/2.54;

    printf("\n Em polegadas:%f", pol);
}