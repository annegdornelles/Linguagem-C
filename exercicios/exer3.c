/*Faça um programa que leia um valor de comprimento em polegadas e apresente-o convertido em
centímetros. A fórmula de conversão é: C = P 2,54, sendo C o comprimento em centímetros e P o ∗
comprimento em polegadas.*/

#include<stdio.h>

int main(){
    int pol;
    float cm;

    printf("\n Insira o valor em polegadas:");
    scanf("%d",&pol);

    cm = pol*2.54;

    printf("\n O valor em cm:%.2f", cm);
}