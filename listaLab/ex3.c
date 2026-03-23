/*Faça um programa que leia a base e a altura de um triângulo. A seguir, calcule e
imprima a sua área.*/

#include<stdio.h>

int main(){
    float base, h, area;

    printf("\n Insira a base:");
    scanf("%f",&base);

    printf("\n Insira a altura:");
    scanf("%f",&h);

    area = (base*h)/2;

    printf("\n A area vale:%.2f", area);
    return 0;
}