/*Faça um programa que leia o valor da velocidade em m/s, transforme e imprima
este valor em km/h.*/

#include<stdio.h>

int main(){
    float metro, km;
    //metro = m/s
    //km = km/hr

    printf("\n Insira a velocidade em m/s:");
    scanf("%f",&metro);

    km = metro*3.6;

    printf("\n A velocidade em km/h eh:2.%f", km);
    return 0;
}